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
三种方式用accumulate计算自定义结构类型
double average_age0 = accumulate(it1, it2, 0.0, Student()) / students.size(); //重载了()
double average_age1 = accumulate(it1, it2, 0.0, [](int sum, Student &x) { return sum + x.age;}) / students.size();
double age_sum = 0;
for_each(it1, it2, [&](Student &x) {age_sum += x.age;}); //donot forget:& {} ;
double average_age2 = age_sum / students.size();
