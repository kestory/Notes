#include <iostream>
#include "template.h"
using namespace std;

int main() {
	double a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	int b[5] = {3, 1, 4, 1, 5};
	cout << Is_Sorted(a, 5) << endl;
	cout << Is_Sorted(b, 5) << endl;
	return 0;
}
