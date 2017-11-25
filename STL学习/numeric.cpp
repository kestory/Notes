#include <numeric>

三种方式用accumulate计算自定义结构类型
double operator () (double base, const Student &stu) {
	return base + stu.age;
}
double sum0 = accumulate(it1, it2, 0.0, Student());//重载了()
double sum1 = accumulate(it1, it2, 0.0, [](int sum, Student &x) { return sum + x.age;});//二元谓词
double sum2 = 0;
for_each(it1, it2, [&](Student &x) {sum2 += x.age;});//donot forget:& {} ;


iota
iota (ForwardIterator first, ForwardIterator last, T val)//向序列中写入以val为初值的连续值序列
int n[10];
iota (n, n + 10, 0);
for (int i = 0; i < 10; ++i)	cout << n[i] << ' ';
