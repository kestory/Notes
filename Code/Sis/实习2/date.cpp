#include "date.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;

Date::Date(int year, int month, int day): year(year), month(month), day(day)
{
	if (year <= 0 || month <= 0 || month > 12 || day <= 0 || day > daysOfMonth(year, month)) {
		cout << "Error invalid date: ";
		show();
		cout << endl;
		exit(-1);
	}
}

//判断是否为闰年
bool Date::isLeapYear(int year)const
{
	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

//得到某个月的天数
int Date::daysOfMonth(int year, int month)const
{
	int days = 0;

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	case 2:
		days = 28 + isLeapYear(year);
		break;
	}

	return days;
}

//显示日期
void Date::show()const
{
	cout << year << "-" << month << "-" << day << endl;
}

//改变日期
Date Date::changeDays(const int days)const
{
	int yearTemp = year;
	int monthTemp = month;
	int dayTemp = day;

	if (days > 0) {
		dayTemp += days;

		while (dayTemp > daysOfMonth(yearTemp, monthTemp)) {
			dayTemp -= daysOfMonth(yearTemp, monthTemp);

			monthTemp++;
			if (monthTemp > 12) {
				yearTemp++;
				monthTemp = 1;
			}
		}
	} else {  //days为负数
		dayTemp += days;

		while (dayTemp < 1) {
			monthTemp--;
			if (monthTemp < 1) {
				yearTemp--;
				monthTemp = 12;
			}
			dayTemp += daysOfMonth(yearTemp, monthTemp);
		}
	}

	return Date(yearTemp, monthTemp, dayTemp);
}

//计算两个日期之间的天数
int Date::distance(const Date &d)const
{
	//存储平年中某个月1月之前有多少天
	const int DAYS_OF_MONTH[] =
	{0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

	int years = year - d.year;
	int months = DAYS_OF_MONTH[month] - DAYS_OF_MONTH[d.month];
	int days = day - d.day;

	//4年一闰，100的倍数免润，400的倍数再闰
	int totalDays = years * 365 + years / 4 - years / 100 + years / 400
	                + months + days;

	return totalDays;
}

/*重载运算符*/

//日期加上days个天数
Date operator +(const Date &d, const int days)
{
	if (days == 0) { //如果天数为0，返回当个月
		return d;
	}
	else
		return d.changeDays(days);
}


//日期减去days个天数
Date operator -(const Date &d, const int days)
{
	if (days == 0) { //如果天数为0，返回当个月
		return d;
	}
	else
		return d.changeDays(-days);
}

//两个日期相减，前一个日期必须大于后一个日期
int operator -(const Date &d1, const Date &d2)
{
	if (d1.distance(d2) < 0) {
		cout << "被减数日期必须大于减数日期！" << endl;
		exit(-1);
	}
	else if (d1.distance(d2) == 0)
		return 0;
	else
		return d1.distance(d2);
}


int main()
{
	Date d1(2018, 5, 20);
	Date d2 = d1 + 1314;
	Date d3 = d1 - 10;
	d1.show();
	d2.show();
	d3.show();
	cout << d2 - d3;
	return 0;
}
