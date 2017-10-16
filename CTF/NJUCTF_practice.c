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



~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Shodan
hostname:nju.edu.cn city:nanjing country:CN
