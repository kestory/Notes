#include <iostream>
#include "sort.h"
using namespace std;

int main() {
	int a[5] = {1, 4, 2, 5, 3};
	           sort(a, 5);
	for (int i = 0; i < 5; ++i)	cout << a[i] << ' ';
	cout << endl;


	double b[5] = {1.2, 5.32, 3.1, 6.3, 99.3};
	sort(b, 5);
	for (int i = 0; i < 5; ++i)	cout << b[i] << ' ';
	cout << endl;

	float c[5] = {32.2, 23.2, 1.4, 65.4};
	sort(c, 5);
	for (int i = 0; i < 5; ++i)	cout << c[i] << ' ';
	cout << endl;

	char d[5] = {'s', 'x', 'r', 'g', 'f'};
	sort(d, 5);
	for (int i = 0; i < 5; ++i)	cout << d[i] << ' ';
	cout << endl;

	return 0;
}

