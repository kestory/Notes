#include <iostream>
#define D(x) cout<<#x<<"="<<x<<endl;
using namespace std;

int main(int argc, char *argv[]) {
	int x, k;
	int n[50] = {23, 35, 110, 145, 207};
	int number = 5;//记录真实有多少数据，每插入一个要++
	cout << "\n请输入(输入-1结束)：\n";
	cin >> x;
	while (x != -1) {//这样可以一直输入到你想停止为止
		if (x <= n[0])
			k = 0;
		else if (x >= n[number - 1])
			k = number;
		else {
			for (int j = 0; j < number - 1; ++j)
				if (x >= n[j] && x <= n[j + 1])
					k = j + 1;
		}

		//上面是找到要插入的那个位置，下标记录为k
		//int temp=n[k];
		number++;
		for (int i = number; i > k ; --i)
			n[i] = n[i - 1];

		n[k] = x;//全部挪完后可以放心的把要插入的数赋值到这个位置上了

		for (int i = 0; i < number; ++i)//输出结果查看
			cout << ' ' << n[i];

		cout << "\n请输入(输入-1结束)：\n";
		cin >> x;
	}

	return 0;
}




#include <iostream>
#include <vector>	//数组的增强版
#define D(x) cout<<#x<<"="<<x<<endl;
using namespace std;

int main(int argc, char *argv[]) {
	//vector<int> a(10, 1);		//声明一个初始大小为10且初始值都为1的向量
	int n[5] = {23, 35, 110, 145, 207};
	vector<int> a(n, n + 5);           	//将数组n的前5个元素作为向量a的初值

	/*
	vector<int>::iterator it = a.begin();
	a.insert(it + 1, 1);
	for (int x = 0; x < a.size(); x++)
		cout << ' ' << a[x];
	*/
	int x, k;
	cout << "\n请输入(输入-1结束)：\n";
	cin >> x;
	while (x != -1) {

		D(a.size())
		if (x <= a[0])
			k = 0;
		else if (x >= a[a.size() - 1])
			k = a.size();
		else {
			for (int j = 0; j < a.size() - 1; ++j)
				if (x >= a[j] && x <= a[j + 1])
					k = j + 1;
		}

		vector<int>::iterator it = a.begin();
		a.insert(it + k, x);

		for (int x = 0; x < a.size(); x++)
			cout << ' ' << a[x];

		cout << "\n请输入(输入-1结束)：\n";
		cin >> x;
	}

	return 0;
}

