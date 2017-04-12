#include <climits>
	cout<<INT_MAX<<endl;
	cout<<INT_MIN<<endl;
2147483647
-2147483648

#include <cmath>     /* fabs&&abs */
	double x,y;
	cin>>x>>y;
	cout<<fabs(x-y);&&cout<<fabs(x-y);
#include <math.h>
	double x,y;
	scanf("%lf%lf",&x,&y);
	printf("%f",fabs(x-y));
C++ abs 对所有数据类型适用，C 要 abs 对整型 fabs 对浮点
In C++, it's always sufficient to use std::abs; it's overloaded for all the numerical types.
In C, abs only works on integers, and you need fabs for floating point values.
These are available in C++ (along with all of the C library), but there's no need to use them.//'

判断两浮点数相近
#define a 1e-8

三元操作符
x=(x>m)?x:m;

#include <cmath>	/* ln & lg */
	double x,y;
	x=log10((long double)n);    // log10 的函数表示
	y=log((long double)n);        // ln 的函数表示

#include <typeinfo>//输出变量类型
using namespace std;
...
cout << typeid(d).name() << endl;
