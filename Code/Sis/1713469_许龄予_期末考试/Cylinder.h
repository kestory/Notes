#include <iostream>
using namespace std;
#define PI 3.1415926
class Cylinder
{
public:
	static int obj_count;
	double radius;
	double height;
	Cylinder(double r, double h);
	Cylinder(const Cylinder& a);
	~Cylinder();
	double Get_Volume();
	double Get_Surface();
	static int get_num_of_objects(){return obj_count;}

};

//定义构造函数
Cylinder ::Cylinder(double r, double h) {radius = r; height = h; obj_count++;}
//定义拷贝构造函数
Cylinder ::Cylinder(const Cylinder& a)
{
	radius = a.radius;
	height = a.height;
	obj_count++;
}
//定义析构函数
Cylinder ::~Cylinder() {obj_count--;}
//求体积
double Cylinder ::Get_Volume()
{
	return PI * radius * radius * height;
}

//求表面积
double Cylinder ::Get_Surface()
{
	return (PI * radius * radius * 2) + (2 * PI * radius * height);
}

void display(Cylinder c) {
	cout << "\n第" << Cylinder::obj_count-1 <<"个："<< endl;
	cout << "半径为" << c.radius << endl;
	cout << "高为" << c.height << endl;
	cout << "体积为" << c.Get_Volume() << endl;
	cout << "表面积为" << c.Get_Surface() << endl;
}

int Cylinder::obj_count=0;
