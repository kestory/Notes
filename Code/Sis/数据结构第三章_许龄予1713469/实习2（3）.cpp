#include <iostream>
#include <stack>
#include <queue>
using namespace std;
#define D(x) cout<<#x<<"="<<x<<endl;

//pop：把n-1先放入另个队
//push：直接push进不空的那个
//同时总有个空的

class MyStack {
public:

	queue<int> q1, q2;

	void push(int x) {
		if (q1.size() != 0)
			q1.push(x);
		else
			q2.push(x);
	}

	int pop() {
		if (!q1.empty()) {
			int size = q1.size();
//					cout<<"size1="<<size<<endl;
			for (int i = 0; i < size - 1; ++i) {
				q2.push(q1.front());
				q1.pop();
			}
			int x = q1.front();
			q1.pop();
			return x;
		}
		else if (!q2.empty()) {
			int size = q2.size();
//			cout<<"size2="<<size<<endl;
			for (int i = 0; i < size - 1; ++i) {
				q1.push(q2.front());
				q2.pop();
			}
			int x = q2.front();
			q2.pop();
			return x;
		}
		else
			return -1;
	}
};


int main(int argc, char *argv[]) {
	MyStack ms;
	ms.push(1);
	ms.push(3);
	ms.push(5);
	ms.push(7);
	ms.push(9);
	ms.push(11);
	ms.push(13);
	cout << ms.pop() << endl;
	cout << ms.pop() << endl;
	cout << ms.pop() << endl;
	cout << ms.pop() << endl;
	cout << ms.pop() << endl;
	cout << ms.pop() << endl;
	cout << ms.pop() << endl;
	return 0;
}
