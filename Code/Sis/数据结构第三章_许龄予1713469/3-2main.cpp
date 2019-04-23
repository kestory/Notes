#include <iostream>
#include <string>
#include "LinearStack.h"
#define D(x) cout<<#x<<"="<<x<<endl;
using namespace std;
int main(int argc, char *argv[]) {
	LinearStack<int> S(11);
	S.Push(1);
	S.Push(3);
	S.Push(5);
	S.Push(7);
	S.Push(9);
	S.Push(11);
	S.Push(13);
	S.Push(15);
	cout<<S;
	return 0;
}
