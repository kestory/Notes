#include <iostream>
#include <fstream>
using namespace std;

struct node
{
	int data;
	node *left, *right;
};

class BinaryTree
{
public:
	node *root;
	BinaryTree() { root = NULL;}
	void create_BinaryTree(int);
	void inorder(node *);	//中序遍历
};

void BinaryTree::create_BinaryTree(int x) {
	node *newnode = new node;
	newnode->data = x;
	newnode->right = newnode->left = NULL;
	if (root == NULL)
		root = newnode;
	else
	{
		node *back;
		node *current = root;
		while (current != NULL)
		{
			back = current;
			if (current->data > x)
				current = current->left;
			else
				current = current->right;
		}
		if (back->data > x)
			back->left = newnode;
		else
			back->right = newnode;
	}
}

void BinaryTree::inorder(node *temp) {
	if (temp != NULL) {
		inorder(temp->left);
		cout << temp->data << " ";
		inorder(temp->right);
	}
}

int main()
{
	BinaryTree A;
	ifstream  file("data.txt");
	int array[100];
	int n = 0;
	cout << "建立排序二叉树顺序: " << endl;
	while (!file.eof()) {
		file >> array[n];
		cout << array[n] << " ";
		A.create_BinaryTree(array[n]);
		n++;
	}
//	for (int i = 0; i < 8; i++)
//		file >> array[i];
	//int array[] = {1, 2, 3, 4};
	//int array[] = {43, 56, 37, 28, 17, 39, 22, 70};

	cout << endl << "中序遍历序列: " << endl;
	A.inorder(A.root);


}
