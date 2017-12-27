https://www.renfei.org/blog/introduction-to-cpp-string.html
str.size() and str.length() are just synonyms.
size() is there to be consistent with other STL containers (like vector, map, etc.)
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
--------------------------------------
//string -> int
string s = "123";
int i = stoi(s);
//int -> string
int a;
string s = to_string(a);
//string -> char*
char * cstr = new char [str.length()+1];
strcpy (cstr, str.c_str());
--------------------------------------
str.empty();//检查 str 是否为空，为空返回 1，否则返回 0
str[n];
int pos1 = str.find_first_of('w');//==v
int pos2 = strchr(str.c_str(), 'w') - str.c_str();//strchr返回地址，两地址相减就是第几个

