#include <set>
//红黑树实现的集合：唯一、自动排序(an ordered sequence of unique keys)，不支持下标操作符


set<int> s1(nums1.begin(), nums1.end());
set<int> myset = { 4, 1, 2, 4, 2, 3 };
for (auto it = myset.begin(); it != myset.end(); ++it)//auto = std::set<int>::iterator
	cout << *it << "\n";

