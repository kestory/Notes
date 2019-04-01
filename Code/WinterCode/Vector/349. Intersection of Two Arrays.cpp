http://www.cnblogs.com/grandyang/p/5507129.html
#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;
int main()
{
    int n1[] = {4, 9, 5};
    int n2[] = {9, 4, 9, 8, 4};
    vector<int> nums1(n1, n1 + 3);
    vector<int> nums2(n2, n2 + 5);
    unordered_set<int> s1(nums1.begin(), nums1.end());
    unordered_set<int> s2(nums2.begin(), nums2.end());
    //for (auto it = s1.begin(); it != s1.end(); ++it)    cout << *it << " ";
    //cout<<endl;
    //for (auto it = s2.begin(); it != s2.end(); ++it)    cout << *it << " ";
    vector<int> res;
    for (auto i = s1.begin(); i != s1.end(); ++i) {
        for (auto j = s2.begin(); j != s2.end(); ++j) {
            if (*i == *j)
                res.push_back(*i);
        }
    }
    for (auto it = res.begin(); it != res.end(); ++it)    cout << *it << " ";

    //return res;
    return 0;
}



unordered_set<int> s1(nums1.begin(), nums1.end());//原本是用的set
unordered_set<int> s2(nums2.begin(), nums2.end());//unordered_set会快一些
vector<int> res;
for (auto i = s1.begin(); i != s1.end(); ++i) {
    for (auto j = s2.begin(); j != s2.end(); ++j) {
        if (*i == *j)
            res.push_back(*i);
    }
}
return res;




把nums1转化为set，然后遍历nums2，重合的就是交集，放入结果set，最后把结果转化为vector形式
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {


        unordered_set<int> s1(nums1.begin(), nums1.end()), res;
        for (auto j = nums2.begin(); j != nums2.end(); ++j)
            if (s1.count(*j))
                res.insert(*j);
        return vector<int>(res.begin(), res.end());

    }
};
