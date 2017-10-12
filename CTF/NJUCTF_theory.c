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
