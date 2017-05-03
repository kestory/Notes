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

int max = *max_element(v.begin(), v.end());
