/*
教材186页，上机实习 1 二叉树的操作
（2）构建一棵链式表示的二叉树，其中每一结点保存一名学生的信息（包括学号、姓名和成绩），且任一结点中学生的学号大于其左子树各结点中学生的学号，
小于其右子树各结点中学生的学号。假设将以下6名学生信息依次插入二叉树中：（“1102030”，“李刚”，65）、（“1102035”，“王涛”，92）、
（“1102041”，“吴明”，73）、（“1102023”，“马洪”，85）、（“1102033”，“赵冰”，90）、（“1102045”，“陈立”，88），
插入完毕后分别在二叉树中查找学号为1102033和1102037的结点，若查找成功则将结点中保存的学生信息输出，否则输出“查找失败！”
*/

#include "LinkedBinTree.h"
#include "Student.h"
#include <string>

using namespace std;

Student s[6]={Student("1102030","李刚",65), Student("1102035","王涛",92), Student("1102041","吴明",73), Student("1102023","马洪",85), Student("1102033","赵冰",90), Student("1102045","陈立",88)};	//以数组形式创建学生结点，调用构造函数

LinkedBinTree <Student> btree;	//创建元素类型为学生结点的二叉树

void InsertBinTree()	//将学生结点按要求插入二叉树
{
	LinkedNode<Student> *pNode=NULL;
//	LinkQueue<LinkedNode<Student>*> q;
	btree.CreateRoot(s[0]);
	for(int i=1;i<6;i++)	//6个点嘛，最多搜6次
	{
		pNode=btree.GetRoot();	//获取根节点，并从根结点开始查找
		while(1)	//没有插入当前结点时，寻找合适的插入点
		{
			Student currentNode;	//用于存储当前比较结点
			btree.GetNodeValue(pNode, currentNode);
			if(s[i].getKey()<currentNode.getKey())		//寻找左子树
			{
				if(btree.GetLeftChild(pNode)!=NULL)	//若左子树非空,则将左子树根节点作为新的根节点进行查找
				{
					pNode=btree.GetLeftChild(pNode);
					continue;
				}
				else	//左子树为空，则找到可以插入的位置
				{
					btree.InsertLeftChild(pNode,s[i]);
					break;	//插入结点，while循环结束
				}

			}
			else		//寻找右子树
			{
				if(btree.GetRightChild(pNode)!=NULL)	//若右子树非空,则将右子树根节点作为新的根节点进行查找
				{
					pNode=btree.GetRightChild(pNode);
					continue;
				}
				else	//右子树为空，则找到可以插入的位置
				{
					btree.InsertRightChild(pNode,s[i]);
					break;	//插入结点，while循环结束
				}
			}
		}

	}
}

void searchBinTree(string key)
{
	LinkedNode<Student> *pNode=btree.GetRoot();
	while(pNode!=NULL)
	{
		Student currentNode;
		btree.GetNodeValue(pNode, currentNode);
		if(key==currentNode.getKey())	//找到结点，进行输出
		{
			cout<<"查找成功"<<endl;
			cout<<currentNode;
			return;
		}
		else if(key<currentNode.getKey())	//寻找左子树
		{
			pNode=btree.GetLeftChild(pNode);
		}
		else	//寻找右子树
		{
			pNode=btree.GetRightChild(pNode);
		}
	}
	cout<<"查找失败"<<endl;	//循环结束，没有找到结点
	return;
}

int main()
{

	InsertBinTree();
	btree.InOrderTraverse();	//中序输出实际上按学号从小到大顺序进行输出
	cout<<endl<<endl;
	searchBinTree("1102033");
	cout<<endl<<endl;
	searchBinTree("1102037");
	return 0;
}
