#include <vector>//数组的增强版
vector<int> a;		//声明一个int型向量a
vector<int> a(10);	//声明一个初始大小为10的向量
vector<int> a(10, 1);	//声明一个初始大小为10且初始值都为1的向量
vector<int> b(a);	//声明并用向量a初始化向量b
vector<int> b(a.begin(), a.begin() + 3);	//将a向量中从第0个到第2个(共3个)作为向量b的初始值
用数组来初始化向量
int n[] = {1, 2, 3, 4, 5};
vector<int> a(n, n+5);              //将数组n的前5个元素作为向量a的初值
vector<int> a(&n[1], &n[4]);        //将n[1] - n[4]范围内的元素作为向量a的初值

a.size();//the number of elements, which is the number of actual objects held in the vector, not necessarily equal to its storage capacity


int max = *max_element(v.begin(), v.end());

// vector::size
#include <iostream>
#include <vector>
#define D(x) cout<<#x<<"="<<x<<"\t";
using namespace std;
int main ()
{
    vector<int> myints;
    cout << "0. size: " << myints.size() << '\n';
    for_each(myints.begin(),myints.end(),[](int x){D(x)});

    for (int i=0; i<10; i++) myints.push_back(i);
    cout << "\n1. size: " << myints.size() << '\n';
    for_each(myints.begin(),myints.end(),[](int x){D(x)});

    myints.insert (myints.end(),10,100);
    cout << "\n2. size: " << myints.size() << '\n';
    for_each(myints.begin(),myints.end(),[](int x){D(x)});

    myints.pop_back();
    cout << "\n3. size: " << myints.size() << '\n';
    for_each(myints.begin(),myints.end(),[](int x){D(x)});

    return 0;
}
