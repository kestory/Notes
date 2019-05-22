#include <algorithm>

------- remove && remove_if -------
ForwardIt remove( ForwardIt first, ForwardIt last, const T& value );
ForwardIt remove_if( ForwardIt first, ForwardIt last, UnaryPredicate p );
这两个方法的前两个参数相同，第三个参数不同：remove的第三个参数是常量；remove_if的第三个参数是一个过滤条件
不会改变容器大小，并返回容器末端的最后一个元素，常结合 erase 使用
str1.erase(remove(str1.begin(), str1.end(), ' '), str1.end());
str2.erase(remove_if(str2.begin(), str2.end(), [](unsigned char x) {return isspace(x);}),


------- Heap using STL C++ -------
int myints[] = {20, 30, 40, 25, 15};
vector<int> v1(myints, myints + 5);
make_heap(v1.begin(), v1.end());
cout<<"MAX is "<<v1.front() << endl;
v1.push_back(50);
push_heap(v1.begin(), v1.end());
cout<<"MAX is "<<v1.front() << endl;
pop_heap(v1.begin(), v1.end());
cout<<"MAX is "<<v1.front() << endl;
for (int &x : v1)
	cout << x << " ";
cout << endl;
sort_heap(v1.begin(), v1.end());//After this operation, the container is no longer a heap.
for (int &x : v1)
	cout << x << " ";
cout << endl;

------- reverse -------
string s = "1234";
reverse(s.begin(), s.end());
cout << s << endl;

int n[] = {1, 2, 3, 4, 5};
vector<int> v(n, n + 5);
reverse(v.begin(), v.end());
for (int &x : v)
	cout << x << " ";

------- fill -------
// 将一个区间的元素都赋予val值
fill(d.begin(), d.end(), INF); //初始化最全部为INF
fill(v.begin() + 3, v.end() - 2, 8);
