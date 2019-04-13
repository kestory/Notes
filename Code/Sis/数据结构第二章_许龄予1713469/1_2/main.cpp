/*教材66页上机实习1，顺序表的操作，实习内容2-（2）
有两个顺序表S1和S2，假设它们的元素值从左到右递增排列，且没有重复值，设计一个Merge函数，该函数的功能是将这两个表合并成一个元素值仍有小到大排列的顺序表L
*/


#include<iostream>
using namespace std;
#define D(x) cout<<#x<<"="<<x<<endl;

#include "LinearList.h"

#define N 10

LinearList<int> L1(N);
LinearList<int> L2(N);
LinearList<int> L(N+N);

void Merge()	//完成将两个有序顺序表合并的任务
{
    int x,y;
    int i1=1,i2=1;
    int i;
    for(i=1;i<=N+N&&i1<=N&&i2<=N;i++) {
        L1.GetData(i1, x);
        L2.GetData(i2, y);
        if(x>y){
            L.Insert(i, y);
            i2++;
        }
        else{
            L.Insert(i, x);
            i1++;
        }

    }
    if(i1==N){
        L1.GetData(i1, x);
        L.Insert(i, x);
    }
    if(i2==N){
        L2.GetData(i2, y);
        L.Insert(i, y);
    }

//    D(x)D(y)
//    D(i1)D(i2)D(i)
}

void InsertL1()
{
    for(int i=1;i<=N;i++)
        L1.Insert(i,2*i);
}

void InsertL2()
{
    for(int i=1;i<=N;i++)
        L2.Insert(i,2*i+1);
}

int main()
{
    InsertL1();	//按递增顺序将数据插入顺序表1
    //输出顺序表1
    cout<<"顺序表1为：\n"<<L1<<endl;

    InsertL2();	//按递增顺序将数据插入顺序表2
    //输出顺序表2
    cout<<"顺序表2为：\n"<<L2<<endl;

    Merge();	//合并两个表
    //输出合并后的表
    cout<<"合并后的顺序表位:\n"<<L<<endl;
    return 0;
}