#理念：以人为本，从人的角度思考而非机器

操作系统中，虚拟内存(virtual memory)通常会被分成用户空间(user space)与内核空间(kernel space)
man手册区段
1	一般命令(General commands)
2	系统调用(System calls)
3	C库函数(C standard library)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//终端以$开头，coderunner（CR）无开头，irb以>开头
----------------------------
----------------------------
$ ruby -e "p Time.now"
p Time.now
2017-06-30 10:02:46 +0800
----------------------------
----------------------------
pid是每个进程的唯一进程标示符
ppid是其父进程的标识符
>puts Process.pid
5543
>puts Process.ppid
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
----------------------------
----------------------------
Unix中，万物皆文件

passwd = File.open('/etc/passwd')
puts passwd.fileno
hosts = File.open('/etc/hosts')
puts hosts.fileno
# Close the open passwd file. The frees up its file descriptor number to be used by the next opened resource.
passwd.close
null = File.open('/dev/null')
puts null.fileno

irb 输出
9
10
9
CR 输出
14
16
14
--------------
我们打开的文件描述符编号最小是3，012在这
puts STDIN.fileno
puts STDOUT.fileno
puts STDERR.fileno
0
1
2
----------------------------
----------------------------
最大文件描述符编号
p Process.getrlimit(:NOFILE)
[4864, 9223372036854775807]
[软限制，硬限制]
--------------
提高软限制
Process.setrlimit(:NOFILE,4096)
p Process.getrlimit(:NOFILE)
[4096, 4096]
--------------
# The maximum number of simultaneous processes最大并发进程数
# The largest size file that may be created
# The maximum size of the stack segment of the process

p Process.getrlimit(:NPROC)
p Process.getrlimit(:FSIZE)
p Process.getrlimit(:STACK)
[709, 1064]
[9223372036854775807, 9223372036854775807]
[8388608, 67104768]
