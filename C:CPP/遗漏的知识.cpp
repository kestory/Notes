#include <climits>
cout << INT_MAX << endl;
cout << INT_MIN << endl;
2147483647
- 2147483648
#include <float.h>
cout << DBL_MAX << endl;
cout << numeric_limits<double>::max() << endl;
cout << DBL_MIN << endl;
1.79769e+308
1.79769e+308
2.22507e-308
---------------------------------------------------------------------------------------------- -
#include <cmath>     /* fabs&&abs */
double x, y;
cin >> x >> y;
cout << fabs(x - y);&&cout << fabs(x - y);
#include <math.h>
double x, y;
scanf("%lf%lf", &x, &y);
printf("%f", fabs(x - y));
C++ abs 对所有数据类型适用，C 要 abs 对整型 fabs 对浮点
In C++, it's always sufficient to use std::abs; it's overloaded for all the numerical types.
In C, abs only works on integers, and you need fabs for floating point values;
These are available in C++ (along with all of the C library), but there's no need to use them.//'
---------------------------------------------------------------------------------------------- -
判断两浮点数相近
#define a 1e-8
---------------------------------------------------------------------------------------------- -
三元操作符
x = (x > m) ? x : m;
---------------------------------------------------------------------------------------------- -
#include <cmath>	/* ln & lg */
double x, y;
x = log10((long double)n);  // log10 的函数表示
y = log((long double)n);      // ln 的函数表示
---------------------------------------------------------------------------------------------- -
#include <typeinfo>//输出变量类型
using namespace std;
...
cout << typeid(d).name() << endl;
---------------------------------------------------------------------------------------------- -
IntSet operator +(const IntSet& iset)const;
第一个const保证 iset不会被改变同时&保证效率高
第二个const说明这是“常成员函数”，只用来获取对象的状态，在函数体里面不能改变数据对象的值，就是本来的this指向的对象不能变
比如 InSet c = a + b;
第一个const保证b不变，第二个const保证a不变

这里函数返回值为IntSet，所以可以赋值，即a + b可以赋值给c
---------------------------------------------------------------------------------------------- -
new / delete 动态开辟二维数组//m,n先输入m行n列
int **p = new int*[m]; //开辟行
for (int i = 0; i < m; i++)
	p[i] = new int[n]; //开辟列

//释放开辟的资源
for (i = 0; i < m; i++)
	delete[] p[i];
delete[] p;
------------------------------------------
STL中的 vector 动态开辟二维数组
//注意这一行：vector <int后两个 "> "之间要有空格！否则会被认为是重载 "> > "。
vector<vector<int> > p(m, vector<int>(n));
---------------------------------------------------------------------------------------------- -
