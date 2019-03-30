#include <iostream>
#include "FUNCTIONTEMPLATE.h"
using namespace std;
int main(int argc, char *argv[]) {
	int a[5] = {3, 1, 4, 2, 8};
	Sort(a, 5);
	for (int i = 0; i < 5; ++i)
		cout << a[i] << ' ';
	cout << endl;

	char b[5] = {'a', 's', 'd', 'f', 'g'};
	Sort(b, 5);
	for (int i = 0; i < 5; ++i)
		cout << b[i] << ' ';
	cout << endl;

	double c[5] = {3.1, 1.1, 4.1, 2.1, 8.1};
	Sort(c, 5);
	for (int i = 0; i < 5; ++i)
		cout << c[i] << ' ';

	return 0;
}
