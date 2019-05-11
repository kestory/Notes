/*
创造哈夫曼结点，使其存储叶子结点中的字符集信息，以及字符出现次数，即权重信息
*/

#include <iostream>
#include <string>

using namespace std;

class HuffmanNode
{
public:
	HuffmanNode(char c, int weight);
	HuffmanNode(){};
	void Output(ostream& out) const;
	int GetWeight(){return weight;};
	char GetChar(){return c;};
private:
	char c;
	int weight;
};

HuffmanNode::HuffmanNode(char c, int weight)
{
	this->c=c;
	this->weight=weight;
}


void HuffmanNode::Output(std::ostream &out) const
{
	if(c)
	{
		out<<"叶子结点："<<endl
		   <<"字符："<<c
		   <<"权重："<<weight<<endl;
	}
	else
	{
		out<<"非叶子节点："<<endl
		   <<"权重："<<weight<<endl;
	}
}

ostream& operator<<(ostream& out, const HuffmanNode& h)
{
	h.Output(out);
	return out;
}