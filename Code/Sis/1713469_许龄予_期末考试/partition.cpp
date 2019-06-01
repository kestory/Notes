#include <iostream>
#include <vector>
using namespace std;
vector<int> part(vector<int> l, int x) {
	int p1 = 0, p2 = l.size() - 1;
	for (int i = 0; i < l.size() && (p1 <= p2); ++i)
	{
		if (l[p1] >= x && l[p2] <= x) {
			swap(l[p1], l[p2]);
			p1++; p2--;
		}
		if (l[p1] < x)
			p1++;
		if (l[p2] > x)
			p2--;
	}
	return l;
}
int main() {
	int a1[] = {1, 4, 3, 2, 5, 2};
	vector<int> vec1(a1, a1 + 6);
	for (int i = 0; i < vec1.size(); i++)	cout << vec1[i] << " ";
	cout << endl;

	vector<int> vec11 = part(vec1, 3);
	for (int i = 0; i < vec11.size(); i++)
		cout << vec11[i] << " ";
	cout << endl;


	int a2[] = {3, 1, 4, 2, 5, 1, 1, 1, 1};
	vector<int> vec2(a2, a2 + 9);
	for (int i = 0; i < vec2.size(); i++)	cout << vec2[i] << " ";
	cout << endl;

	vector<int> vec22 = part(vec2, 3);
	for (int i = 0; i < vec22.size(); i++)
		cout << vec22[i] << " ";




	return 0;
}
