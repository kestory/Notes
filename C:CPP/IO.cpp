小数点后 3 位
>>>>>>>
cout.precision(3);
cout << fixed << sum << endl;//没有fixed就是一共输出n位
=======
printf("%.3f\n", sum);
printf("%.*f\n", 3, sum);
----------------------------
endl(cout);//== cout<<endl; // endl called as a regular function
fflush(stdout);//强制刷新缓存，输出显示


