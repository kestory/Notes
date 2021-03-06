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

简易方式
在Github创建好仓库
git clone https://github.com/kestory/PlaneGame.git
然后把文件添加进去
第一次 git push 需要账号密码
之后 git add .｜git status ｜git commit -m "balabala"｜git push 即可

---------------------------------------------------
		|  Github  |
---------------------------------------------------
Watch也就是关注该repo的动态
star则类似于Facebook和Twitter上的 like
star历史//http://www.timqian.com/star-history/#gzc/CLRS
fork就是将别人的项目拷贝一份给自己，new一个新的分支(Branch)出来，你push的改进和补充则又由原作者选择是否接受

---------------------------------------------------
		|  配置  |
---------------------------------------------------
//显示当前的Git配置
git config --list
//编辑Git配置文件
git config -e [--global]
//设置提交代码时的用户信息
git config --global user.name "USERNAME“"
git config --global user.email "email@example.com"
//用了--global参数，表明这台机器上所有的Git仓库都使用这个配置
---------------------------------------------------
		|  分支  |
---------------------------------------------------
//列出所有本地分支
git branch
//列出所有远程分支
git branch -r
//列出所有分支
git branch -a
//创建分支
git branch [branchname]
//切换分支
git checkout [branchname]
//创建新分支并立即切换到该分支下
git checkout -b [branch]
---------------------------------------------------
		|  查看信息  |
---------------------------------------------------
------------
|   status   |
------------
git help status
-s, --short
           Give the output in the short-format

---------------------------------------------------
		|  远程同步  |
---------------------------------------------------
------------
|  remote  |
------------
git remote
//列出所有远程主机
git remote -v
//列出所有远程的网址
git remote add <主机名> <网址>
git remote add <name> git@github.com:kestory/Notes.git 	//注意有冒号":" <name>是远程库名字
//关联一个远程库
git remote rm <主机名>
git remote rm origin
//删除名字叫origin的远程库
git remote rename <原主机名> <新主机名>
git remote rename hi hello
//重命名本地远程仓库名, 从hi改为hello
进入.git文件夹cat config可以看到有哪些远程库

关联后，使用命令git push -u <name> master第一次推送master分支的所有内容（-u选项指定一个默认主机）
以后git push 即可

---------------------------------------------------
		problem-solving
---------------------------------------------------
当要push代码到git时，出现提示：
	error:failed to push some refs to ...
reason: git仓库中有新内容(README)而本地没有
//GitHub repo has seen new commits pushed to it
可以强推，即强覆盖
git push -f
接受新内容就:
git pull --rebase origin master
git push origin master

error: src refspec master does not match any.
reason:目录中没有文件，空目录是不能提交上去的(忘了git add了)

ssh -T git@github.com
验证ssh配置是否成功

fork后想同步到最新
配置remote指向上游仓库
	git remote add upstream https://github.com/gzc/CLRS.git
从上游仓库获取到分支，及相关的提交信息，它们将被保存在本地的 upstream/master 分支
	git fetch upstream
切换到本地的 master 分支
	git checkout master
把 upstream/master 分支合并到本地的 master 分支
	git merge upstream/master
	git push
