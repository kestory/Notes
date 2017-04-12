终端常用的快捷键：
ctrl+shift+c: 复制
ctrl+shift+v: 粘贴

Ctrl + d        删除一个字符（相当于 Delete）（当命令行无字符时，退出终端）
Ctrl + h        退格删除一个字符（相当于 Backspace）
Alt  + d         向右删一个单词
Ctrl + w        向左删一个单词

Ctrl + u        删除光标之前到行首的字符
Ctrl + k        删除光标之前到行尾的字符
Ctrl + c        取消当前行输入的命令

Ctrl + a        光标移动到行首（Ahead of line）
Ctrl + e        光标移动到行尾（End of line）


//Alt  + f        光标向前（Forward）移动一个单词
//Alt  + b        光标往回（Backward）移动一个单词

Ctrl + l        清屏（相当于 clear 命令）

Ctrl + r        显示：号提示，根据用户输入查找相关历史命令（reverse-i-search）
Alt  + .         粘帖最后一次命令最后的参数（通常用于mkdir xx 后, cd配合着alt+.）


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
