想自动化实现git
=====================
之前都是写一个makefile，偶尔改动
git:
	git add .
	git status
	git commit -m "tiny changes"
	git push
=====================
用C/C++结合 system() 实现
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
	string str;
	getline(cin, str);
	string pre = "git commit -m ";
	pre += str;
	cout << pre;
	system("git add .");//
	system("git status");
	system(pre.c_str());
	system("git push");
	return 0;
}
>git: 'gui' is not a git command. See 'git --help'.
我猜 git 不是 shell 命令所以不能用？
=====================
写一个shell脚本
#!/bin/sh
git add .
git status
git commit -m "rm make"
git push
------------------------------------
chmod +x ./test.sh #使脚本具有执行权限
./test.sh
=====================
https://segmentfault.com/q/1010000000263597

