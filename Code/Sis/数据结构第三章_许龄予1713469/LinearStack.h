#ifndef LINEARSTACK
#define LINEARSTACK

#include <iostream>
using namespace std;
#define D(x) cout<<#x<<"="<<x<<endl;
template<class T>
class LinearStack
{
public:

	LinearStack(int LSMaxSize);
	~LinearStack();
	bool IsEmpty();
	bool IsFull();
	bool Push(const T&x);
	bool Top(T& x);
	bool Pop(T&x);
	void OutPut_order(ostream& out) const;
	void OutPut_inorder(ostream& out) const;
	// friend ostream& operator<<(ostream& out, const LinearStack& x);
private:
	// int length;
	int top;
	int MaxSize;
	T *element;
};
//构造函数
template<class T>
LinearStack<T>::LinearStack(int LSMaxSize)
{
	MaxSize = LSMaxSize;
	element = new T[LSMaxSize];
	top = -1;
}
//析构函数
template<class T>
LinearStack<T>::~LinearStack()
{
	delete []element;
}
//判读栈是否为空
template<class T>
bool LinearStack<T>::IsEmpty()
{
	return top == -1;
}
//判读栈是否为满
template<class T>
bool LinearStack<T>::IsFull()
{
	return top + 1 == MaxSize;
}
//进栈
template<class T>
bool LinearStack<T>::Push(const T&x)
{
	if (IsFull())
		return false;
	else {
		top++;
		element[top] = x;
		// D(top)D(x)
		return true;
	}

}
//求栈顶元素
template<class T>
bool LinearStack<T>::Top(T& x)
{
	if (IsEmpty())
		return false;
	else {
		x = element[top];
		return true;
	}
}
//出栈
template<class T>
bool LinearStack<T>::Pop(T&x)
{
	if (IsEmpty())
		return false;
	else {
		x = element[top];
		top--;
		return true;
	}
}
//顺序输出
template<class T>
void LinearStack<T>::OutPut_order(ostream& out)const
{
	for (int i = 0; i <= top; ++i)
	{
		out << element[i] << " ";
	}
}
//逆序输出
template<class T>
void LinearStack<T>::OutPut_inorder(ostream& out)const
{
	for (int i = top; i >= 0; --i)
	{
		out << element[i] << " ";
	}
}
//重载<<
template<class T>
ostream& operator<<(ostream& out, const LinearStack<T>& x)
{
	cout<<"顺序输出："<<endl;
	x.OutPut_order(out);
	cout<<endl<<"逆序输出："<<endl;
	x.OutPut_inorder(out);
	return out;
}


#endif // LINEARSTACK
