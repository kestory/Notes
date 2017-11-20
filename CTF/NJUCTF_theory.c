SUID=Set User ID
当s这个标志出现在文件所有者的x权限上时，例如文件权限状态"-rwsr-xr-x"，此时就称为 Set UID，简称为SUID的特殊权限。
(1)SUID权限仅对"二进制可执行文件"有效
(2)执行者对于该文件"具有x的可执行权限"
(3)本权限仅在"执行该文件的过程中"有效
(4)执行者将具有该文件拥有者的权限

SGID=Set Group ID


env - run a program in a modified environment
env的参数是要执行的Shell命令，env会遍历PATH环境变量中的路径来寻找要执行的命令。
env命令常出现在脚本文件的第一行
#!/usr/bin/env python
不管python在哪个目录中，只要目录列在PATH环境变量中，就可以被找到


.d 是 directory 的缩写，表示这是一个目录（文件夹）。这个在配置文件中比较常见。
一般如果有一系列格式相同的，目的一致的配置文件，就把它们放在一个以.d结尾的文件夹中。
例如 init.d 中存放的就是一系列系统服务的管理（启动与停止）脚本。


crontab 周期性地运行任务


tmpfs是Linux/Unix系统上的一种基于内存的文件系统
有如下2个优势
1. 动态文件系统的大小
2. 闪电般的速度
但重新启动之后不会保留
/dev/shm/是一个设备文件，它使用就是tmpfs文件系统
应用场景
%mkdir  /dev/shm/tmp
%chmod  1777  /dev/shm/tmp         //注意权限
%mount --bind  /dev/shm/tmp  /tmp
%ls -ld /tmp
drwxrwxrwt 2 root root 40 May 29 21:46 /tmp


CGI 通用网关接口（Common Gateway Interface）
文件描述符:0(stdin)1(stdout)2(stderr)
1>&2 意思是把标准输出重定向到标准错误
2>&1 意思是把标准错误输出重定向到标准输出
&>filename 意思是把stout和stderr都重定向到文件filename中

/etc/passwd
username:password:User ID:Group ID:comment:home directory:shell

 egrep=grep -E
 egrep只支持扩展的正则表达式，不支持基本正则表达式
