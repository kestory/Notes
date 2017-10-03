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
% cat /proc/version
Linux version 4.9.0-kali3-amd64 (devel@kali.org) (gcc version 6.3.0 20170321 (Debian 6.3.0-11) ) #1 SMP Debian 4.9.18-1kali1 (2017-04-04)

