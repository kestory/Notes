/ 构造函数调用顺序: 基类->成员对象->本身 /
http://blog.csdn.net/gaoyingju/article/details/8790233
#include <iostream>
using namespace std;
class A {
public:
	A()	{cout << "A" << endl;}
};
class C {
public:
	C()	{cout << "C" << endl;}
};
class B: public A {
public:
	B()	{cout << "B" << endl;}
	C c;
};
int main(int argc, char const *argv[]) {
	B *b = new B();
	return 0;
}
64位g++下，输出为
A
C
B
--------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------
/ a missing vtable usually means the first non-inline virtual member function has no definition /
#include <iostream>
using namespace std;
class Parent {
public:
	virtual int func () = 0;
	~Parent(){};//without {} will have "Undefined symbols for architecture x86_64:"
};
class Child: public Parent {
public:

	int data;
	Child (int k) {data = k;}
	int func() {   // virtual function
		cout << "Returning square of 10\n";
		return 10 * 10;
	}
	void Display () {cout << data << "\n";}
	~Child() {cout << "Overridden Parents Destructor \n";}
};
int main() {
	Child a(10);
	a.Display();
	a.func();
	a.Display();
}
$ ./main
10
Returning square of 10
10
Overridden Parents Destructor
--------------------------------------------------------------------------------------------------
--------------------------------------高程期末考某题--------------------------------------------
#include <iostream>
using namespace std;
class A
{	int x, y;
public:
	A() {cout << "1\n"; f();}
	~A() {cout << "2\n";}
	virtual void f() {cout << "3\n";}
	void g() {cout << "4\n";}
};
class B: public A
{	int z;
public:
	B() {cout << "5\n";}
	~B() {cout << "6\n";}
	void f() {cout << "7\n";}
	void g() {cout << "8\n";}
};

void func(A *pa) {pa->f(); pa->g();}

int main() {
	cout << "-------Section1-------" << endl;
	A a;
	func(&a);
	cout << "-------Section2-------" << endl;
	B b;
	func(&b);
	cout << "-------Section3-------" << endl;
	A *p = new B;
	func(p);
	cout << "-------Section4-------" << endl;
	delete p;
	cout << "-------Section5-------" << endl;

	return 0;
}
-------Section1-------
1
3
3
4
-------Section2-------
1
3
5
7
4
-------Section3-------
1
3
5
7
4
-------Section4-------
2
-------Section5-------
6
2
2

