Homebrew
搜索软件：brew search 软件名，如brew search wget
安装软件：brew install 软件名，如brew install wget
卸载软件：brew remove 软件名，如brew remove wget
查看信息：brew info 软件名，如brew info wget
brew list   —列出已安装的软件
brew update	更新Homebrew
brew home *	用浏览器打开
brew info *	显示软件信息
brew deps *	显示包依赖
brew server *	启动web服务器，可以通过浏览器访问http://localhost:4567/ 来同网页来管理包
brew -h 	帮助

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
