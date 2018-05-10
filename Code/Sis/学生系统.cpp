/*
由学生姓名和成绩构成的线性表建立单向链表
1、统计>=95的人数，输出他们的姓名
2、删除成绩<20的信息
3、以60分为分界线
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#define D(x) cout<<#x<<"="<<x<<endl;
class Student_Information {//结构数组把信息存下来
public:
	string name;
	int score;
};
class Student {//结构链表，用于判断和操作
public:
	string name;
	int score;
	Student *next;
};
/*
void swap(Student &a, Student &b) {
	string n = a.name;
	a.name = b.name;
	b.name = n;

	int t = a.score;
	a.score = b.score;
	b.score = t;
}
*/
int main()
{
	ofstream outfile;
	outfile.open("outfile.txt");

	Student_Information a[16] = {"刘一", 16, "陈二", 32, "张三", 48, "李四", 60, "王五", 72, "赵六", 84, "孙七", 96, "周八", 100, "吴九", 95, "郑十", 10};
//	for (int i = 0; i < 10; ++i) cout<<a[i].name<<' '<<a[i].score;
	Student *head = NULL;

	for (int i = 0; i < 10; ++i)
	{
		Student *p = new Student;//need in this for loop
		p->name = a[i].name;
		p->score = a[i].score;
		p->next = head;
		head = p;
	}
//	cout<<head->next->name<<' '<<head->next->next->score;
	//for (Student *p = head; p != NULL; p = p->next)
	//		cout << p->name << " ";

	int number_of_A_Student = 0;
	outfile << "成绩大于等于95的学生：" << endl;
	for (Student *p = head; p != NULL; p = p->next)
		if (p->score >= 95) {
			outfile << p->name << " ";
			number_of_A_Student++;
		}
	outfile << endl << "共" << number_of_A_Student << "人" << endl;

	outfile << endl << endl << "所有学生:" << endl;
	for (Student *p = head; p != NULL; p = p->next)
		outfile << p->name << " " << p->score << "    ";
	int number_of_D_Student = 0;
	outfile << endl << "成绩小于20的学生：" << endl;
	for (Student *p = head; p != NULL; p = p->next)
		if (p->score < 20) {
			outfile << p->name << " ";
			number_of_D_Student++;
		}
//删除低分学生
	Student *p, *pre = head;
	for (p = head->next; p != NULL; p = p->next, pre = pre->next)
		if (p->score < 20) {
			pre->next = p->next;
			delete p;
		}
	if (head->score < 20) {
		p = head;
		head = head->next;
		delete p;
	}

	outfile << endl << "删除这些学生后：" << endl;
	for (Student *p = head; p != NULL; p = p->next)
		outfile << p->name << " " << p->score << "    ";
	/*

		int i = 0;
		int j = 9;
		while (i < j) {
			if (a[i].score > 60 && a[j].score <= 60) {
				swap(a[i], a[j]);
				--j;
			}
		}

	*/
	//D(number_of_A_Student)
	//D(number_of_D_Student)
	for (int i = 0; i < 10; i++)
	{
		for (int j =  9; j > i; j--)
		{
			if (a[j].score > a[j - 1].score)
			{
				string n = a[j].name;
				a[j].name = a[j - 1].name;
				a[j - 1].name = n;

				int t = a[j].score;
				a[j].score = a[j - 1].score;
				a[j - 1].score = t;
			}
		}
	}
	for (int i = 0; i < 10; ++i) cout<<a[i].name<<' '<<a[i].score;
	Student *h = NULL;

	for (int i = 0; i < 10; ++i)
	{
		Student *p = new Student;
		p->name = a[i].name;
		p->score = a[i].score;
		p->next = h;
		h = p;
	}


	/*
		for (Student *p1 = head; p1->next != NULL; p1 = p1->next) {
			Student *p_min = p1;
			for (Student *p2 = p1->next; p2 != NULL; p2 = p2->next)
				if (p2->score < p_min->score)p_min = p2;
			if (p_min != p1) {
				swap(p_min, p1);
			}
		}
	*/

	outfile << endl << "以60为分界线：" << endl;
	for (Student *p = h; p != NULL; p = p->next)
		outfile << p->name << " " << p->score << "    ";

	outfile.close();

	return 0;
}

