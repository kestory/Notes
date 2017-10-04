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
Linux version 4.9.0-kali3-amd64 (devel@kali.org) (gcc version 6.3.0 20170321 (Debian 6.3.0-11) ) #1 SMP Debian 4.9.18-1kali1 (2017-04-04)


***
环境变量
printenv显示环境变量
export设置环境变量
***
I/O重定向
mycommand < infile
mycommand > outfile		//创建或覆盖outfile
mycommand >> outfile	//附加到outfile末端
mycommand 2> outfile		//改变stderr输出目的地，2>> 同上，2是stderr的文件句柄 file handle
mycommand > outfile 2> errorfile	//导入不同文件
mycommand > outfile 2> &1		//导入同一文件
***
组合命令
cmd1;cmd2;cmd3		//都会运行
cmd1&&cmd2&&cmd3	//任一命令失败就停止
cmd1||cmd2||cmd3		//下一命令在前一命令允许完毕后启动


