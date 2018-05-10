#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date
{
private:
	int year, month, day;
public:
	Date(int year, int month, int day);
	Date(const Date &d): year(d.year), month(d.month), day(d.day) {}

	bool isLeapYear(int year)const;   //判断是否为闰年
	int daysOfMonth(int year, int month)const;  //得到某个月的天数
	void show()const;   //显示日期
	Date changeDays(const int days)const;   //改变日期
	int distance(const Date &d)const;   //计算两个日期之间的天数

	/*重载运算符*/

	//日期加上days个天数
	friend Date operator +(const Date &d, const int days);

	//日期减去days个天数
	friend Date operator -(const Date &d, const int days);
	friend int operator -(const Date &d1, const Date &d2);


};

#endif // DATE_H
