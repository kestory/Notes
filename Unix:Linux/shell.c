路径遇到空格
cd Punlic/Drop\ Box/
cd "Public/Drop Box"

file 根据文件的内容输出文件类型
%file Desktop
Desktop: directory
%file main.c
main.c: ASCII c program text

which 定位某个命令的文件路径
type    得知命令类型
%which ls docker pip xx
ls: aliased to ls -G
/usr/local/bin/docker
/usr/local/bin/pip
xx not found
%type  ls docker pip xx
ls is an alias for ls -G
docker is /usr/local/bin/docker
pip is /usr/local/bin/pip
xx not found

find 根据搜索关键词定位文件路径
%find Desktop -name "ping.c"
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

ps aux | grep ssh
查找进程
