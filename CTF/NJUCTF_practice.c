通过ping可以得到IP
cp /usr/share/wordlists/dnsmap.txt /root/Desktop/
fierce -dnsserver 8.8.8.8 -dns nju.edu.cn -wordlist dnsmap.txt
fping -ag 202.119.32.0 202.119.63.255查看存活机器

Wargame中切换题目su即可
su level01

修改PATH环境变量
PATH=/tmp:$PATH    让/tmp出现在PATH最前面

提升权限
chmod 777 file
-rwxrwxrwx 任何人都有读、写、运行权限

链接
ln -s /bin/getflag01 /tmp/echo

echo -e enable interpretation of backslash escapes
% by="123\n321"
% echo $by
123\n321
% echo -e $by
123
321

${parameter,,}//把parameter展开成小写
https://billie66.github.io/TLCL/book/zh/chap35.html
% by=HELLO
% echo $by
HELLO
% echo ${by,,}
hello
% echo $by
HELLO


python输出重复字符串
print('ab'*4)
在命令中直接执行python代码
python -c cmd
python -c "print('ab'*4)" | ./flag20


[~]$ sort
123
321
111//control + d
111
123
321
[~]$ wc < /etc/passwd
      96     265    5925

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Shodan
hostname:nju.edu.cn city:nanjing country:CN
