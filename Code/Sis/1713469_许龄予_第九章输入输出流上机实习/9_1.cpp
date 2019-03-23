#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {
	ofstream out_file("test.txt", ios::out);
	if (!out_file) exit(-1);
	string t;
	cin >> t;
	while (t != "end") {
		out_file << t << endl;
		cin >> t;
	}
	out_file.close();

	ifstream in_file("test.txt", ios::in);
	if (!in_file) exit(-1);
	string x;
	while (!in_file.eof())
	{	cout << x << endl;
		in_file >> x;
	}
	in_file.close();

	return 0;
}
