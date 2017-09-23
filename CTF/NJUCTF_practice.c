通过ping可以得到IP
cp /usr/share/wordlists/dnsmap.txt /root/Desktop/
fierce -dnsserver 8.8.8.8 -dns nju.edu.cn -wordlist dnsmap.txt
fping -ag 202.119.32.0 202.119.63.255查看存活机器

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Shodan
hostname:nju.edu.cn city:nanjing country:CN
