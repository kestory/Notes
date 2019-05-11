#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
	Student (char *StdNumber, char *StdName, int grade);
	Student (){};
	void Output(ostream& out) const;
	string getKey(){return StdNumber;};	//使用学号作为关键字进行对比
private:
	string StdNumber;
	string StdName;
	int score;
};

Student::Student(char *StdNumber, char *StdName, int grade)
{
	this->StdNumber=StdNumber;
	this->StdName=StdName;
	this->score=grade;
}

void Student::Output(std::ostream &out) const
{
	out<<"学号："<<StdNumber<<endl
	   <<"姓名："<<StdName<<endl
	   <<"成绩："<<score<<endl;
}

ostream& operator<<(ostream& out, const Student& s)
{
	s.Output(out);
	return out;
}