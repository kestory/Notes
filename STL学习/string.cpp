https://www.renfei.org/blog/introduction-to-cpp-string.html
str.size() and str.length() are just synonyms.
size() is there to be consistent with other STL containers (like vector, map, etc.),
     length() is there to make things more readable.
// comparing size, length, capacity and max_size
#include <iostream>
#include <string>
     int main ()
{
	std::string str ("Test string");
	std::cout << "size: " << str.size() << "\n";
	std::cout << "length: " << str.length() << "\n";
	std::cout << "capacity: " << str.capacity() << "\n";
	std::cout << "max_size: " << str.max_size() << "\n";
	return 0;
}
--------------------------------------
size: 11
length: 11
capacity: 15
max_size: 4294967291


str.empty();//检查 str 是否为空，为空返回 1，否则返回 0
str[n];

string_2_int~~~~~~~
string s = "123";
int i = stoi(s);
int_2_string~~~~~~~
int a;
string s = to_string(a);
