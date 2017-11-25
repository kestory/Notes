#include <algorithm>

remove && remove_if
ForwardIt remove( ForwardIt first, ForwardIt last, const T& value );
ForwardIt remove_if( ForwardIt first, ForwardIt last, UnaryPredicate p );
这两个方法的前两个参数相同，第三个参数不同：remove的第三个参数是常量；remove_if的第三个参数是一个过滤条件
不会改变容器大小，并返回容器末端的最后一个元素，常结合 erase 使用
str1.erase(remove(str1.begin(), str1.end(), ' '), str1.end());
str2.erase(remove_if(str2.begin(), str2.end(), [](unsigned char x) {return isspace(x);}),


