#include <iostream>
#define D(x) cout<<#x<<"="<<x<<endl;
using namespace std;

void swap1(int a, int b) {//值
	int t = a;
	a = b;
	b = t;
}

void swap2(int &a, int &b) {//引用
	int t = a;
	a = b;
	b = t;
}

void swap3(int *a, int *b) {//改变指针的间接引用
	int t = *a;
	*a = *b;
	*b = t;
}

void swap4(int *a, int *b) {//改变指针本身
	int *t = a;
	a = b;
	b = t;
}

int main() {
	int a1 = 11, a2 = 11, a3 = 11, a4 = 11;
	int b1 = 22, b2 = 22, b3 = 22, b4 = 22;

	swap1(a1, b1);
	D(a1)D(b1)
//没有交换
//传入的实参是a和b的副本，对副本的改变不会反应到a和b身上
	swap2(a2, b2);
	D(a2)D(b2)
//交换了
//传入的实参是a和b的引用，改变引用类型形参的值，相应的实参的值也会变化
	swap3(&a3, &b3);
	D(a3)D(b3)
//交换了
//形参的地址传给了实参，函数通过形参可以间接访问实参的值
	swap4(&a4, &b4);
	D(a4)D(b4)
//没有交换
//交换的是形参的地址，对实参没有影响

	return 0;
}





