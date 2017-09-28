Homebrew
命令			摘要
brew search wget	搜索名称包含wget的库(软件)
brew install wget	安装wget
brew uninstall wget	卸载wget
brew info wget		显示wget相关信息
brew deps wget	显示wget这个工具所依赖的其他库
brew upgrade wget	更新wget(更新时旧版本的安装包依旧会保存在你的电脑上)

brew list   		列出所有已安装的软件
brew list --versions 	列出所有已经安装的内容，包括版本号
brew home 		打开homebrew官网
brew update		更新Homebrew
brew home *		用浏览器打开
brew info *		显示软件信息
brew deps *		显示包依赖
brew server *		启动web服务器，可以通过浏览器访问http://localhost:4567/ 来同网页来管理包
brew -h 		帮助
brew outdated 		检查是否有软件包需要更新
brew cleanup 		清除旧版本缓存
~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Oh My ZSH
查看系统的shell
     cat /etc/shells
查看正在用的shell
     echo $SHELL
~~~~~~~~~~~~~~~~~~~~~~~~~~~~
"MacTips"
调整 Launchpad 布局
defaults write com.apple.dock springboard-columns -int 5;
defaults write com.apple.dock springboard-rows -int 3;
defaults write com.apple.dock ResetLaunchPad -bool TRUE;
killall Dock

command + i 可以打开简介 (command + o 打开文件or目录)
在简介的注释里添加关键词以后可以用Spotlight搜索

Safari 浏览到网页想发给别人，直接command + i就会打开邮件并把网页附加进去

系统软件输入英文时按esc键(或者 fn + f5 )会显示可能单词

想改截图默认的 png 到 jpeg：defaults write com.apple.screencapture type -string JPEG

sw_vers 获取 OS X 的版本信息

screencapture 截屏
