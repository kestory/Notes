#include <vector>//数组的增强版
vector<int> a;		//声明一个int型向量a
vector<int> a(10);	//声明一个初始大小为10的向量
vector<int> a(10, 1);	//声明一个初始大小为10且初始值都为1的向量
vector<int> b(a);	//声明并用向量a初始化向量b
vector<int> b(a.begin(), a.begin() + 3);	//将a向量中从第0个到第2个(共3个)作为向量b的初始值
用数组来初始化向量
int n[] = {1, 2, 3, 4, 5};
vector<int> a(n, n + 5);            //将数组n的前5个元素作为向量a的初值
vector<int> a(&n[1], &n[4]);        //将n[1] - n[4]范围内的元素作为向量a的初值

myvector.push_back (myint);//Adds a new element at the end of the vector
myvector.pop_back();//Parameters & Return value are both none

int max = *max_element(v.begin(), v.end());

/
.size();//the number of elements, which is the number of actual objects held in the vector, not necessarily equal to its storage capacity
.insert(iterator position, size_type n, const value_type& val);
lambda
/
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

	myints.insert (myints.end(), 10, 100);
	D(myints.size())
	for_each(myints.begin(), myints.end(), [](int x) {cout << x << ' ';});

	myints.pop_back();
	D(myints.size())
	for_each(myints.begin(), myints.end(), [](int x) {cout << x << ' ';});

	return 0;
}
-----------------------------------
myints.size()=0

myints.size()=10
0 1 2 3 4 5 6 7 8 9
myints.size()=20
0 1 2 3 4 5 6 7 8 9 100 100 100 100 100 100 100 100 100 100
myints.size()=19
0 1 2 3 4 5 6 7 8 9 100 100 100 100 100 100 100 100 100
-----------------------------------




/


/
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
