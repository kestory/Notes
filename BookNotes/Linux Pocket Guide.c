wc[Command Name] -l[Options] myfile[Arguments]

/bin 存放命令
/usr/share/doc 存放说明文件

当文件名是-开头的：--表示选项到此结束
wc -- -1.c
wc ./-1.c

/proc 虚构目录
不存在于磁盘中，只有读取时内核才实时提供状态信息
% ls -l /proc/version
-r--r--r-- 1 root root 0 10月  3 04:58 /proc/version
% cat /proc/version	//查看当前系统的版本信息
Linux version 4.9.0-kali3-amd64......


***
环境变量
printenv显示环境变量
export设置环境变量
***
I/O重定向
mycommand < infile
mycommand > outfile			//创建或覆盖outfile
mycommand >> outfile		//附加到outfile末端
mycommand 2> outfile			//改变stderr输出目的地，2>> 同上，2是stderr的文件句柄 file handle
mycommand > outfile 2> errorfile	//导入不同文件
mycommand > outfile 2> &1		//导入同一文件
command < file1 >file2
command 命令将 stdin 重定向到 file1，将 stdout 重定向到 file2
***
组合命令
cmd1;cmd2;cmd3		//都会运行
cmd1&&cmd2&&cmd3	//任一命令失败就停止
cmd1||cmd2||cmd3		//下一命令在前一命令允许完毕后启动
***
history
!! = !-1
!*	//前次命令的所有参数
!$	//前次命令的最后一个参数 Alt+. 可以多次追溯
~~~~~~~~
Shell Script
~~~~~~~~
输入输出
% read name
Linux
% echo "the plural of  name is ${name}s"
the plural of  name is Linuxs

% printf "I am %d years old\n" `expr 18 + 2`	+号左右两侧至少都有一个空格
I am 20 years old


逻辑值&返回值
% test 10 -lt 5	10 < 5?
% echo $?	查看返回值
1		of course not
% test 1 -lt 5
% echo $?
0
% test -n "hello"	"hello"字符串长度不为0吗
% echo $?
0			 Yes
//test 有一个别名 [，使用时要在末端补上 ]
[ 1 -lt 5 ]
[ -n "hello" ]
