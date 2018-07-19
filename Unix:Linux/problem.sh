apt-get连接不上软件源
sudo apt-get update命令来更新软件源
如果屋漏偏逢连夜雨，更新命令也不能正常工作，大量"Failed to fetch"
换源 设置妥当DNS服务器即可
sudo vi /etc/resolv.conf
//add the line
nameserver 8.8.8.8

打开software商店，edit里面china点Chose Best Server
