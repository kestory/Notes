#include <stack>
#include <queue>

stack<int> stk;
s.empty()	如果栈为空返回true，否则返回false
s.size()		返回栈中元素的个数
s.pop()		删除栈顶元素但不返回其值
s.top()		返回栈顶的元素，但不删除该元素
s.push()		在栈顶压入新元素

queue<int> q;
q.empty()	如果队列为空返回true，否则返回false
q.size()		返回队列中元素的个数
q.pop()		删除队列首元素但不返回其值
q.front()	返回队首元素的值，但不删除该元素
q.push()	在队尾压入新元素
q.back()	返回队列尾元素的值，但不删除该元素
