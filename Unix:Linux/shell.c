登陆时在用户名处输入 >console 可以直接进入命令行界面
一条命令包括 Command Name、Options、Arguments、Extras 四个部分
路径遇到空格
cd Punlic/Drop\ Box/
cd "Public/Drop Box"

abcdefghijklmnopqrstuvwxy()

file 根据文件的内容输出文件类型
>~ file Desktop
Desktop: directory
>kk file main.c
main.c: ASCII c program text

find 根据搜索关键词定位文件路径
>~ find Desktop -name "ping.c"
Desktop/kk/ping.c
Desktop/Networking/Lab/Lab2/ping.c

less
后可以用 v 来进行vim编辑

ls
-R会递归

man
空格可以翻页 man -k和关键字来对整个使用指南数据库进行搜索


mkdir
可以用-p选项，来一起创建路径中不存在的文件夹（这样你就不用挨层创建了）

which 定位某个命令的文件路径
>which ls docker pip xx
ls: aliased to ls -G
/usr/local/bin/docker
/usr/local/bin/pip
xx not found