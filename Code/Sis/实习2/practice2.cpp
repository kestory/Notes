#include <iostream>
#define D(x) cout<<#x<<"="<<x<<endl;
using namespace std;

template <class T>
bool IsSorted(T element[], unsigned int count) {
	bool result = true;
	for (int i = 0; i < count - 1; ++i)
		if (element[i] > element[i + 1])
			result = false;
	return result;

}

int main() {
	int a[10] = {1, 2, 3, 4, 5, 6, 7};
	int b[10] = {1, 2, 3, 5, 4, 6, 7};
	double c[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
	double d[10] = {1.1, 2.2, 3.3, 5.5, 4, 4, 6.6, 7.7};
	char e[10] = {'a', 'b', 'c', 'd', 'e'};
	char f[10] = {'a', 'c', 'b', 'd', 'e'};
	D(IsSorted(a, 7))
	D(IsSorted(b, 7))
	D(IsSorted(c, 7))
	D(IsSorted(d, 7))
	D(IsSorted(e, 5))
	D(IsSorted(f, 5))

	return 0;
}

