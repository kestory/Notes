使用apt-get命令安装所需的开发软件非常方便，但也有不少时候由于链接不上软件源而不能正常安装
于是很多人都会想到使用sudo apt-get update命令来更新软件源
而恰恰这时屋漏偏逢连夜雨，更新命令也不能正常工作，出现大量“Failed to fetch”的错误。
设置妥当DNS服务器即可
sudo vi /etc/resolv.conf
