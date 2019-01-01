#include <iostream>
using namespace std;

int main() {
	int a = 1;
	int b = 1;
	{
		int b = 2;
		{
			int a = 3;
			cout << a << ' ' << b << endl;
		}
		{
			int b = 4;
			cout << a << ' ' << b << endl;
		}
		cout << a << ' ' << b << endl;
	}
	cout << a << ' ' << b << endl;

	return 0;
}

