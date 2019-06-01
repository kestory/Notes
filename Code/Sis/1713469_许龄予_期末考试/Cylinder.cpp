#include <iostream>
#include "Cylinder.h"
using namespace std;


int main() {
	Cylinder c1(2, 3);
	display(c1);
	Cylinder c2 = c1;
	display(c2);
	Cylinder c3(4, 5);
	display(c3);
	c3.~Cylinder();
	cout<<"\n类的个数为："<<Cylinder::get_num_of_objects();
	return 0;
}
