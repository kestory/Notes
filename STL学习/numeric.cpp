#include <numeric>
三种方式用accumulate计算自定义结构类型
double sum0 = accumulate(it1, it2, 0.0, Student());//重载了()
double sum1 = accumulate(it1, it2, 0.0, [](int sum, Student &x) { return sum + x.age;});
double sum2 = 0;
for_each(it1, it2, [&](Student &x) {sum2 += x.age;});//donot forget:& {} ;
