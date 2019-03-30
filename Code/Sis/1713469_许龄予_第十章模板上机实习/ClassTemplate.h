#include <iostream>
using namespace std;
#ifndef CLASS_TEMPLATE
#define CLASS_TEMPLATE
#define PI 3.1415926
template <class Type>
class Cylinder
{
public:
	Type x, y, z;
	Type radius;
	Type height;
	Cylinder(Type a, Type b, Type c, Type r, Type h);
	Cylinder(const Cylinder& a);
	Type Get_Volume();
	Type Get_Surface();
};

//定义构造函数
template <class Type>
Cylinder <Type>::Cylinder(Type a, Type b, Type c, Type r, Type h) {x = a; y = b; z = c; radius = r; height = h;}
//定义拷贝构造函数
template <class Type>
Cylinder <Type>::Cylinder(const Cylinder& a)
{
	x = a.x;
	y = a.y;
	z = a.z;
	radius = a.radius;
	height = a.height;
}

//求体积
template <class Type>
Type Cylinder <Type>::Get_Volume()
{
	return PI * radius * radius * height;
}

//求表面积
template <class Type>
Type Cylinder <Type>::Get_Surface()
{
	return (PI * radius * radius * 2) + (2 * PI * radius * height);
}

template <class Type>
void display(Cylinder<Type> c) {
	cout << "圆心的三个坐标为" << c.x << ' ' << c.y << ' ' << c.z << endl;
	cout << "半径为" << c.radius << endl;
	cout << "高为" << c.height << endl;
	cout << "体积为" << c.Get_Volume() << endl;
	cout << "表面积为" << c.Get_Surface() << endl;
}
#endif // CLASS_TEMPLATE
