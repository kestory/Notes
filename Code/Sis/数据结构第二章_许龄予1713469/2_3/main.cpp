/*教材67页，上机实习2，实习内容（3）
设计算法并测试，将单向链表中关键字的值重复的结点删除，使得链表中各节点的值均不相同*/

#include<iostream>
#include<set>
#include <stack>
using namespace std;
#define D(x) cout<<#x<<"="<<x<<endl;
#include "LinkList.h"

#define N 10

LinkList<int> L;

void Insert()	//生成关键字有重复的链表
{
    L.Insert(1,1);
    L.Insert(2,1);
    L.Insert(3,1);
    L.Insert(4,2);
    L.Insert(5,3);
    L.Insert(6,3);
    L.Insert(7,3);
    L.Insert(8,4);

}

void Distinct()	//将关键字有重复的结点删除
{
    set<int> s;
    int y;
    for(int i=1;i<=L.GetLength();i++){
        int x;
        L.GetData(i,x);
        for(int j=i+1;j<=L.GetLength();j++) {
            L.GetData(j,y);
            if(x==y)
                s.insert(j);
//                L.DeleteByIndex(j,y);
            }
        }
    set<int>::iterator it;
    stack<int> st;
    for(it=s.begin();it!=s.end();it++)
        st.push(*it);
//        cout<<*it<<endl;
    for (; !st.empty(); st.pop())
        L.DeleteByIndex(st.top(),y);
//        cout << st.top() << endl;
//    for(it=s.end();it>=s.begin();it--)
//        L.DeleteByIndex(*it,y);
//
    }


int main()
{
    Insert();	//调用函数生成关键字有重复的链表
    //输出关键字有重复的链表
    cout<<"当前链表为：\n"<<L<<endl;

    Distinct();

    //输出关键字无重复的链表
    cout<<"删除关键字后当前链表为：\n"<<L<<endl;
    return 0;
}