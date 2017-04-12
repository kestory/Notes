git init 初始化一个Git仓库

添加文件(no matter new or modified)到Git仓库.
	git add <file> 可添加多个文件//No news is good news.
	git commit -m "说明"

git status 随时掌握工作区的状态//tell me 文件是否被修改
git diff <file>可以查看修改内容//改了再改回就没了哦，because there is no diff

git log --pretty=oneline 查看所有提交历史，可只输出一行

在Git中，用HEAD表示当前版本：
	上一个版本就是HEAD^//git reset --hard HEAD^
	上上一个版本就是HEAD^^
	往上100个版本写成HEAD~100

想回到未来
git reflog 找到想要的版本号(前几位即可)
git reset --hard bab6864






---------------------------------------------------
		|  github  |
---------------------------------------------------
当要push代码到git时，出现提示：
	error:failed to push some refs to ...
出现原因在于：git仓库中已经有一部分代码，所以它不允许你直接把你的代码覆盖上去
可以强推，即利用强覆盖方式用你本地的代码替代git仓库内的内容
git push -f

ssh -T git@github.com
验证ssh配置是否成功


关联一个远程库git remote add <name> git@git@github.com:kestory/Notes.git 	//注意有冒号":" <name>是远程库名字
关联后，使用命令git push -u <name> master第一次推送master分支的所有内容
以后git push <name> master推送最新修改

git remote rm origin//删除名字叫origin的远程库
进入.git文件夹cat config可以看到有哪些远程库

