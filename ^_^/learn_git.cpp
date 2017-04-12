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
Watch也就是关注该repo的动态
star则类似于Facebook和Twitter上的”like
fork就是将别人的项目拷贝一份给自己，new一个新的分支(Branch)出来，你push的改进和补充则又由原作者选择是否接受。
当要push代码到git时，出现提示：
	error:failed to push some refs to ...
reason: git仓库中有新内容(README)而本地没有
//GitHub repo has seen new commits pushed to it
可以强推，即强覆盖
git push -f
接受新内容就:
git pull --rebase origin master
git push origin master

ssh -T git@github.com
验证ssh配置是否成功

------------
|  remote  |
------------
git remote -v
列出所有远程仓库信息, 包括网址.
git remote rm origin//删除名字叫origin的远程库
进入.git文件夹cat config可以看到有哪些远程库
git remote rename hi hello
重命名本地远程仓库名, 从hi改为hello

关联一个远程库git remote add <name> git@git@github.com:kestory/Notes.git 	//注意有冒号":" <name>是远程库名字
关联后，使用命令git push -u <name> master第一次推送master分支的所有内容，以后git push 即可
以后git push <name> master推送最新修改



