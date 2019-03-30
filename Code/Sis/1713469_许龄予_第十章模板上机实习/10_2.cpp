#include <iostream>
#include "ClassTemplate.h"
using namespace std;

int main(int argc, char *argv[]) {
	Cylinder<double> c1(1, 2, 1, 2, 3);
	display(c1);
	Cylinder<double> c2 = c1;
	display(c2);

	return 0;
}
