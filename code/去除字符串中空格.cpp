#include <iostream>
#include <string>
#define D(x) cout<<#x<<"="<<x<<endl;
using namespace std;
int main(int argc, char *argv[]) {
	string a="  1  23456  789";
	string b="12443";
	D(a.length())
	int j=0;
	for(int i=0;i<a.length();i++){
		if(a[i]==' '||a[i]=='\t')
			continue;
			else{
				b[j]=a[i];
				j++;
			}
	}
	for (int i = 0; i < j; ++i)
		cout<<b[i];
	//这里有点奇怪的是cout<<b是b=12345
	//b.length()=5
}
~~~~~~~~~~~~~~~~~~~~~~~~~去除字符串中空格(string)~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~去除字符串中空格(char*)~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <iostream>
#include <cstring>
#define D(x) cout<<#x<<"="<<x<<endl;
using namespace std;
int main(int argc, char *argv[]) {
	char a[]="  7 349 472	  7 758 1";
	char b[1024];
	for(int i=0,j=0;i<strlen(a);i++){
		if(a[i]==' '||a[i]=='\t')
			continue;
		else{
			b[j]=a[i];
			j++;
		}
	}
	cout<<b;
}
