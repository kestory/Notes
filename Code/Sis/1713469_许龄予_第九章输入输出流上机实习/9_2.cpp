#include <iostream>
#include <cstring>
using namespace std;

class Student {
private:
	char m_sno[10];
	char m_name[10];
	int m_score;
public:
//	Student(char *sno, char *name, int score): m_sno(sno), m_name(name), m_score(score){}
	Student(char *sno = "000", char *name = "xxx", int score = 60) {
//		Student(char *sno, char *name, int score){
		strcpy(m_sno, sno);
		strcpy(m_name, name);
		m_score = score;
	}

	friend ostream& operator << (ostream& out, const Student &stu);
	friend istream& operator >> (istream& in, Student &stu);

};

ostream& operator << (ostream& out, const Student &stu) {
	out << "Student's Number is: \t" << stu.m_sno << "\nStudent's Name is: \t" << stu.m_name << "\nStudent's score is: \t" << stu.m_score;
	return out;
}
istream& operator >> (istream& in, Student &stu) {
	in >> stu.m_sno >> stu.m_name >> stu.m_score;
	if (!in)
		stu = Student();//如果输入失败，默认初始化
	return in;
}



int main(int argc, char *argv[]) {
	Student stu("171", "xly", 99);
	cout << stu;
	cout << "\nYou can input another student information(e.g. 151 xzq 100): " << endl;
	cin >> stu;
	cout << stu;

	return 0;
}




//用string来做
/*
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	string m_sno;
	string m_name;
	int m_score;
public:
	Student(): m_sno("000"), m_name("xxx"), m_score(60) {}
	Student(string sno, string name, int score) {
		m_sno = sno;
		m_name = name;
		m_score = score;
	}
	friend ostream& operator << (ostream& out, const Student &stu);
	friend istream& operator >> (istream& in, Student &stu);

};

ostream& operator << (ostream& out, const Student &stu) {
	out << "Student's Number is: \t" << stu.m_sno << "\nStudent's Name is: \t" << stu.m_name << "\nStudent's score is: \t" << stu.m_score;
	return out;
}

istream& operator >> (istream& in, Student &stu) {
	in >> stu.m_sno >> stu.m_name >> stu.m_score;
	if (!in)
		stu = Student();//如果输入失败，默认初始化
	return in;
}


int main(int argc, char *argv[]) {
	Student stu("171", "xly", 99);
	cout << stu;
	cout << "\nYou can input another student information(e.g. 151 xzq 100): " << endl;
	cin >> stu;
	cout << stu;

	return 0;
}
*/
