#include <vector>	//数组的增强版

vector<int> a;				//声明一个int型向量a
vector<int> a(10);			//声明一个初始大小为10的向量
vector<int> a(10, 1);			//声明一个初始大小为10且初始值都为1的向量
vector<int> b(a);			//声明并用向量a初始化向量b
vector<int> b(a.begin(), a.begin() + 3);	//将a向量中从第0个到第2个(共3个)作为向量b的初始值
---------用数组来初始化向量-------------
int n[] = {1, 2, 3, 4, 5};
vector<int> a(n, n + 5);			//将数组n的前5个元素作为向量a的初值
vector<int> a(&n[1], &n[4]);		//将n[1] - n[3]范围内的元素作为向量a的初值

---------------------------------------------------------------
访问方式
for (int i = 0; i < myvector.size(); i++)
	cout << ' ' << myvector[i];
for(vector<T>::iterator it=myvector.begin();it!=myvector.end();it++)
	cout<<*it<<" ";

---------------------------------------------------------------
int max = *max_element(v.begin(), v.end());

v.push_back (myint);//Adds a new element at the end of the vector
v.pop_back();//Parameters & Return value are both none
v.size();//the number of elements, which is the number of actual objects held in the vector
v.capacity();//The size of the currently allocated storage capacity in the vector
v.insert()//插入一个或多个元素至 vector 内的任意位置。
v.erase()//删除 vector 中一个或多个元素。
v.max_size()//A pretty large number
v.empty()//whether the vector is empty

------------Lambda-------------
#include <iostream>
#include <vector>
#define D(x) cout<<endl<<#x<<"="<<x<<endl;
using namespace std;
int main ()
{
	vector<int> myints;
	D(myints.size())
	for_each(myints.begin(), myints.end(), [](int x) {cout << x << ' ';});

	for (int i = 0; i < 10; i++) myints.push_back(i);
	D(myints.size())
	for_each(myints.begin(), myints.end(), [](int x) {cout << x << ' ';});

	myints.insert(myints.end(), 10, 100);
	D(myints.size())
	for_each(myints.begin(), myints.end(), [](int x) {cout << x << ' ';});

	myints.pop_back();
	D(myints.size())
	for_each(myints.begin(), myints.end(), [](int x) {cout << x << ' ';});

	return 0;
}
--------------
myints.size()=0

myints.size()=10
0 1 2 3 4 5 6 7 8 9
myints.size()=20
0 1 2 3 4 5 6 7 8 9 100 100 100 100 100 100 100 100 100 100
myints.size()=19
0 1 2 3 4 5 6 7 8 9 100 100 100 100 100 100 100 100 100
-----------------------------------

>>>>>>>
capacity() VS size()
clear() VS swap()//vector<T>().swap(x);
<<<<<<<

#include <iostream>
#include <vector>
#define D(x) cout<<#x<<"="<<x<<endl;
using namespace std;
int main(int argc, char *argv[]) {
	vector <int> vecInt;
	for (int i = 0; i < 500; i++)
		vecInt.push_back(i);
	D(vecInt.capacity())	//j=512，开辟的空间，2的幂
	D(vecInt.size())		//i=500

	vecInt.clear();
	D(vecInt.capacity())	//j=512
	D(vecInt.size())		//i=0

	vecInt.push_back(123);
	D(vecInt.capacity())	//j=512
	D(vecInt.size())		//i=1

	vector <int>().swap(vecInt);  //清除容器并最小化它的容量，
	D(vecInt.capacity())	//j=0
	D(vecInt.size())		//i=0
}

---------------------------------------------------------------
begin()与end()//返回迭代器
front()与back()//返回引用
cout << v1.front() << endl;
cout << v1.back() << endl;
cout << *v1.begin() << endl;
cout << *(v1.end() - 1) << endl;//v1.end()指向的是最后一个元素的下一个位置
