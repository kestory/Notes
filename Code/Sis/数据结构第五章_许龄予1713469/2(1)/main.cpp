/*
教材187页，上机实习2 （1）
假设要编码的字符集为{A,B,C,D,E,F},各字符的出现次数为{20,5,13,8,23,3}，构造一颗哈夫曼树
*/

#include "LinkedBinTree.h"
#include "Huffman.h"
#define MAX 1000

HuffmanNode h[11]={HuffmanNode('A',20),HuffmanNode('B',5), HuffmanNode('C',13), HuffmanNode('D',8), HuffmanNode('E',23), HuffmanNode('F',3),HuffmanNode('g',8),HuffmanNode('h',16),HuffmanNode('i',29),HuffmanNode('j',43),HuffmanNode('k',72)};
LinkedBinTree<HuffmanNode> btree[11];

/*
将btree中的六棵子树依次进行合并，最后合并后的哈夫曼树存储在btree[0]中
*/
void createHuffmanTree()
{

    btree[0].CreateRoot(h[0]);
    LinkedNode<HuffmanNode> *pNode0=btree[0].GetRoot();
    btree[1].CreateRoot(h[1]);
    LinkedNode<HuffmanNode> *pNode1=btree[1].GetRoot();
    btree[2].CreateRoot(h[2]);
    LinkedNode<HuffmanNode> *pNode2=btree[2].GetRoot();
    btree[3].CreateRoot(h[3]);
    LinkedNode<HuffmanNode> *pNode3=btree[3].GetRoot();
    btree[4].CreateRoot(h[4]);
    LinkedNode<HuffmanNode> *pNode4=btree[4].GetRoot();
    btree[5].CreateRoot(h[5]);
    LinkedNode<HuffmanNode> *pNode5=btree[5].GetRoot();

    btree[6].CreateRoot(h[6]);
    LinkedNode<HuffmanNode> *pNode6=btree[6].GetRoot();
    btree[7].CreateRoot(h[7]);
    LinkedNode<HuffmanNode> *pNode7=btree[7].GetRoot();
    btree[8].CreateRoot(h[8]);
    LinkedNode<HuffmanNode> *pNode8=btree[8].GetRoot();
    btree[9].CreateRoot(h[9]);
    LinkedNode<HuffmanNode> *pNode9=btree[9].GetRoot();
    btree[10].CreateRoot(h[10]);
    LinkedNode<HuffmanNode> *pNode10=btree[10].GetRoot();


    btree[6].InsertRightTree(pNode6,btree[1]);
    btree[6].InsertLeftTree(pNode6,btree[5]);

    btree[7].InsertRightTree(pNode7,btree[3]);
    btree[7].InsertLeftTree(pNode7,btree[6]);

    btree[8].InsertRightTree(pNode8,btree[7]);
    btree[8].InsertLeftTree(pNode8,btree[2]);

    btree[9].InsertRightTree(pNode9,btree[4]);
    btree[9].InsertLeftTree(pNode9,btree[0]);

    btree[10].InsertRightTree(pNode10,btree[9]);
    btree[10].InsertLeftTree(pNode10,btree[8]);

    btree[0]=btree[10];

}


int main()
{
    createHuffmanTree();
    cout<<"生成的哈夫曼树为："<<endl;
    btree[0].InOrderTraverse();	//将合并后的哈夫曼树中序输出，并与教材174页的哈夫曼树进行对照。
    return 0;
}
