/构造函数调用顺序:基类->成员对象->本身/
http://blog.csdn.net/gaoyingju/article/details/8790233
#include <iostream>
using namespace std;
class A{
public:
	A()	{cout<<"A"<<endl;}
};
class C{
public:
	C()	{cout<<"C"<<endl;}
};
class B: public A{
public:
	B()	{cout<<"B"<<endl;}
	C c;
};
int main(int argc, char const *argv[]){
	B *b=new B();
	return 0;
}
64位g++下，输出为
A
C
B

