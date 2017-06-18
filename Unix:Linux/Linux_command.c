cat /etc/os-release 这是 Linux 常用的查看当前系统版本的命令
cat /proc/version 查看当前系统的版本信息
uname -r 命令查看当前的内核版本
命令的选项常有两种模式，例如 --version 和 -v 等价
/bin	这个目录保存必须在任何时候都可以访问的二进制代码，以及一般用户经常运行的程序。
df -ah	//-a 显示目录和文件 -h "Human-readable" output BKMGT
source ~/.zshrc相当于重启终端，就是把新配置读入

$ find . -name "._*"|xargs rm
把"._"开头的文件删除/可以直接使用 dot_clean 命令

$ echo | gcc -E -xc -include 'stddef.h' - | grep size_t
typedef long unsigned int size_t;

zip --password 12345 crack_this.zip test.txt
上面命令把test.txt文件压缩为crack_this.zip，并且设置密码12345
穷举法：
fcrackzip -b -c 'aA1!' -l 1-10 -u crack_this.zip//-b代表brute-force；-l限制密码长度；-c指定使用的字符集
密码是数字，所以可以执行（加快破解速度）
fcrackzip -b -c '1' -l 1-10 -u crack_this.zip
密码由6位的小写字母组成，那么只要运行
fcrackzip -c a -p aaaaaa sample.zip

zip()&&unzip()
zip命令可以用来将文件压缩成为常用的zip格式。unzip命令则用来解压缩zip文件。
1. 我想把一个文件abc.txt和一个目录dir1压缩成为yasuo.zip：
＃ zip -r yasuo.zip abc.txt dir1
2.我下载了一个yasuo.zip文件，想解压缩：
# unzip yasuo.zip
3.我当前目录下有abc1.zip，abc2.zip和abc3.zip，我想一起解压缩它们：
＃ unzip abc\?.zip
注释：?表示一个字符，如果用*表示任意多个字符。
4.我有一个很大的压缩文件large.zip，我不想解压缩，只想看看它里面有什么：
# unzip -v large.zip
5.我下载了一个压缩文件large.zip，想验证一下这个压缩文件是否下载完全了
# unzip -t large.zip
6.我用-v选项发现music.zip压缩文件里面有很多目录和子目录，并且子目录中其实都是歌曲mp3文件，
我想把这些文件都下载到第一级目录，而不是一层一层建目录：
# unzip -j music.zip
