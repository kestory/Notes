git init 初始化一个Git仓库

添加文件(no matter new or modified)到Git仓库
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
