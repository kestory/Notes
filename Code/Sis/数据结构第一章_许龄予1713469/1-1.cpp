#include <iostream>
using namespace std;


void swap1(int x, int y) {
	int t = x;
	x = y;
	y = x;
}

void swap2(int *px, int *py) {
	int t = *px;
	*px = *py;
	*py = t;
}

void swap3(int &x, int&y) {
	int t = x;
	x = y;
	y = x;
}


int main(int argc, char *argv[]) {
	cout << "原来的a为1，b为2" << endl;
	int a1 = 1, a2 = 1, a3 = 1;
	int b1 = 2, b2 = 2, b3 = 2;

	cout << "\nSolution 1，参数为值" << endl;
	swap1(a1, b1);
	cout << "a: " << a1 << "\nb: " << b1 << endl;
	cout << "没有变化，因为是值传递，新建的变量交换完了在函数返回后结束生存周期" << endl;

	cout << "\nSolution 2，参数为指针" << endl;
	swap2(&a2, &b2);
	cout << "a: " << a2 << "\nb: " << b2 << endl;
	cout << "有变化，交换了指针所指向的变量的值" << endl;

	cout << "\nSolution 3，参数为引用" << endl;
	swap1(a3, b3);
	cout << "a: " << a3 << "\nb: " << b3 << endl;
	cout << "有变化，引用就是别名" << endl;

	return 0;
}
