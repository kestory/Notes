#理念：以人为本，从人的角度思考而非机器

操作系统中，虚拟内存(virtual memory)通常会被分成用户空间(user space)与内核空间(kernel space)
man手册区段
1	一般命令(General commands)
2	系统调用(System calls)
3	C库函数(C standard library)
~~~~~~~~~~~~~~
~~~~~~~~~~~~~~
#终端以$开头，coderunner（CR）无开头，irb以>开头
<<<<<<<>>>>>>>
<<<<<<<>>>>>>>
$ ruby -e "p Time.now"
> p Time.now
2017-06-30 10:02:46 +0800
<<<<<<<>>>>>>>
<<<<<<<>>>>>>>
pid是每个进程的唯一 进程标示符(process identifier)
ppid是其 父进程 的标识符
> puts Process.pid
5543
> puts Process.ppid
3305
pid在CR中每次运行会变，irb中如果一直保持会话不退出是不会变的，ppid都不变
puts Process.pid
5593
puts Process.ppid
756
--------------
irb保持会话的同时
~ » ps -p 5543
  PID TTY           TIME CMD
 5543 ttys000    0:00.19 irb
~ » ps -p 3305
  PID TTY           TIME CMD
 3305 ttys000    0:00.82 -zsh
~ » ps -p 756
  PID TTY           TIME CMD
  756 ??         0:25.26 /Applications/CodeRunner.app/Contents/MacOS/
<<<<<<<>>>>>>>
<<<<<<<>>>>>>>
Unix中，万物皆文件

passwd = File.open('/etc/passwd')
puts passwd.fileno
hosts = File.open('/etc/hosts')
puts hosts.fileno
# Close the open passwd file. The frees up its file descriptor number to be used by the next opened resource.
passwd.close
null = File.open('/dev/null')
puts null.fileno

irb 输出		|	CR 输出
9		|	14
10		|	16
9		|	14

--------------
我们打开的文件描述符编号最小是 3，012 在这
puts STDIN.fileno
puts STDOUT.fileno
puts STDERR.fileno
0
1
2
<<<<<<<>>>>>>>
<<<<<<<>>>>>>>
最大文件描述符编号
p Process.getrlimit(:NOFILE)
[4864, 9223372036854775807]
[软限制，硬限制]
#> puts Process::RLIM_INFINITY
#9223372036854775807
--------------
提高软限制
Process.setrlimit(:NOFILE,4096)
p Process.getrlimit(:NOFILE)
[4096, 4096]
--------------
p Process.getrlimit(:NPROC)	#The maximum number of simultaneous processes最大并发进程数
p Process.getrlimit(:FSIZE)	#The largest size file that may be created
p Process.getrlimit(:STACK)	#The maximum size of the stack segment of the process
[709, 1064]
[9223372036854775807, 9223372036854775807]
[8388608, 67104768]
<<<<<<<>>>>>>>
<<<<<<<>>>>>>>
环境变量 (environment variables) 在进程间共享
env命令显示所有的环境变量
set命令显示所有本地定义的Shell变量
PATH 罗列出 shell 搜索 用户 输入的执行命令所在的目录
--------------
$ MESSAGE='wing it' ruby -e "puts ENV['MESSAGE']"
wing it
--------------
> ENV['MESSAGE']='wing it'
=> "wing it"
> system "echo $MESSAGE"
wing it
=> true
<<<<<<<>>>>>>>
<<<<<<<>>>>>>>
argv -> argument vector
新建argv.rb文件中写上
p ARGV
puts ARGV.include?('--help')#用户请求帮助了吗
puts ARGV.include?('-c')&&ARGV[ARGV.index('-c') + 1]#获取 -c 选项的值
--------------
$ ruby argv.rb xu zi qian --help -c 2
["xu", "zi", "qian", "--help", "-c", "2"]
true
2
<<<<<<<>>>>>>>
<<<<<<<>>>>>>>
进程命名
$PROGRAM_NAME可以获取当前进程的名称
--------------
puts $PROGRAM_NAME
at_exit {p 'Bye-Bye'}
3.downto(1) do |num|
	$PROGRAM_NAME="Process: #{num}"
	puts $PROGRAM_NAME
end
#CR中
Untitled.rb
Process: 3
Process: 2
Process: 1
"Bye-Bye"
irb中end之后运行，运行完p Process.pid看下pid然后
ps -p 4456
  PID TTY           TIME CMD
 4456 ttys000    0:00.14 Process: 1
可以看到 进程的名称 变化了
<<<<<<<>>>>>>>
<<<<<<<>>>>>>>
退出码(Exit Codes) 0-255 惯例  0 是顺利结束，其它退出码代表各种错误
exit 就是 exit 0
可以定制退出码：exit 22
会调用 at_exit 语句块
exit! 退出码是1，不掉用 at_exit 语句块
abort
abort "sth went wrong"
会打印消息到STDERR也会调用 at_exit 语句块
raise 'lala' 不立即结束进程，而是抛出异常
<<<<<<<>>>>>>>
<<<<<<<>>>>>>>
衍生(fork)－－进程中以编程的方式创建新的进程
子进程继承父进程所有内容，包括已打开文件描述符，有全新的 pid
子进程可以随意更改其内存内容，而不会对父进程造成任何影响
#fork后产生子进程，返回 nil，于是子进程执行else语句后退出，父进程继续运行
puts "parent process pid is #{Process.pid}"
if fork
  puts "entered the if block from #{Process.pid}"
else
  puts "entered the else block from #{Process.pid}"
end
parent process pid is 5978
entered the if block from 5978
entered the else block from 5981
<<<<<<<>>>>>>>
<<<<<<<>>>>>>>
父进程结束后，子进程安然无恙，不会同归于尽
#irb中
fork do
  5.times do
  sleep 1
  puts "I'm an orphan!"
  end
end
abort "Parent process died..."
#退出irb，回到终端命令提示符
I'm an orphan!
I'm an orphan!
I'm an orphan!
I'm an orphan!
I'm an orphan!
#回车后'
Parent process died...
至于为什么，因为abort退出父进程了，子进程变成孤儿进程
如果不写abort，最开头输出的pid是 irb 的pid+1，可见的确是子进程
<<<<<<<>>>>>>>
<<<<<<<>>>>>>>

