输出小数点后两位
#include <iomanip>
cout<<setiosflags(ios::fixed)<<setprecision(2)<<the_number<<endl;
printf("%.2f\n",the_number);

endl(cout);//== cout<<endl; // endl called as a regular function
fflush(stdout);//强制刷新缓存，输出显示
