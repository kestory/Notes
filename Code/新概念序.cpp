#include <algorithm>
#include <iostream>
#include <vector>
#define D(x) cout<<endl<<#x<<"="<<x<<endl;
using namespace std;
//不重复随机数的另一个思想，把所需范围的数随机排列
int main()
{
	vector<int> a;
	for (int i = 1; i <= 60; i++)
		a.push_back(i);

	for_each(a.begin(), a.end(), [](int x) {cout << x << ' ';});
	random_shuffle(a.begin(), a.end());
	D(a.size())
	for_each(a.begin(), a.end(), [](int x) {cout << x << ' ';});

	return 0;
}
/*
The order of New Concept English 3 ^_^
29 56 49 48 36 11 40 51 44 47 15 38 9 30
54 52 42 8 5 12 45 10 18 16 20 33 35 7 55
21 31 37 14 22 41 17 39 23 53 6 59 32 50 46
26 13 3 24 19 27 60 34 25 57 2 1 28 58 43 4
*/
