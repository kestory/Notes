0.头文件
#include <map>
1.map的构造函数
map共提供了 6 个构造函数
map<string, int> mapstring; 			map<int, string> mapint;
map<sring, char> mapstring; 			map<char, string> mapchar;
map<char, int> mapchar; 				map<int, char> mapint；
/ 两种定义方式 /
map<string, int> my_Map;
或者是
typedef map<string, int> MY_MAP;
MY_MAP my_Map;

2.map添加数据；
map<int, string> maplive;
1.maplive.insert(pair<int, string>(102, "aclive"));
2.maplive.insert(map<int, string>::value_type(321, "hai"));
3.maplive[112] = "April"; //map中最简单最常用的插入添加！
4.my_Map.insert(make_pair<string, int>("d", 4));

/ example 1 用insert函数插入pair数据 /
#include <map>
#include <string>
#include <iostream>
using namespace std;
int main() {
	map<int, string> mapStudent;
	mapStudent[1] = "student_one";
	mapStudent.insert(pair<int, string>(2, "student_two"));
	mapStudent.insert(pair<int, string>(3, "student_three"));
	map<int, string>::iterator  iter;
	for (iter = mapStudent.begin(); iter != mapStudent.end(); iter++)
		cout << iter->first << " " << iter->second << endl;
}
输出
1 student_one
2 student_two
3 student_three

/ example 2 用insert函数插入value_type数据 /
#include <map>
#include <string>
#include <iostream>
using namespace std;
int main() {
	map<int, string> mapStudent;
	mapStudent.insert(map<int, string>::value_type (1, "student_one"));
	mapStudent.insert(map<int, string>::value_type (2, "student_two"));
	mapStudent.insert(map<int, string>::value_type (3, "student_three"));
	map<int, string>::iterator  iter;
	for (iter = mapStudent.begin(); iter != mapStudent.end(); iter++)
		cout << iter->first << " " << iter->second << endl;
}
输出
1 student_one
2 student_two
3 student_three
/ example 3 用数组方式插入数据 /





