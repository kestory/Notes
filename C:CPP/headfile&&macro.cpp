/ / / / / / / exit(EXIT_FAILURE) / / / / / / /
/*
 <stdlib.h>
EXIT_FAILURE	1
EXIT_SUCCESS	0
This macro expands to a system-dependent integral expression that, 
when used as the argument for function exit, 
signifies that the application was successful.
The opposite meaning can be specified with EXIT_FAILURE.
*/
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
	FILE *fp = fopen("data.txt","r");
	if (fp == NULL)
	{
	   fprintf(stderr,"fopen() failed in file %s at line # %d", __FILE__,__LINE__);
	   exit(EXIT_FAILURE);
	}
 
	/* 正常进程持续至此。 */
	fclose(fp);
	printf("Normal Return\n");
 
	return EXIT_SUCCESS;
}
---------------------------------------------------------------------------------------------------------
fopen() failed in file Untitled.cpp at line # 9
OR
Normal Return
---------------------------------------------------------------------------------------------------------






/ / / / / / / __FILE__ &&__LINE__&&sizeof / / / / / / /
/*
__LINE__：在源代码中插入当前源代码行号；
__FILE__：在源文件中插入当前源文件名；
__DATE__：在源文件中插入当前的编译日期
__TIME__：在源文件中插入当前编译时间；
__STDC__：当要求程序严格遵循ANSI C标准时该标识被赋值为1；
__cplusplus：当编写C++程序时该标识符被定义。
*/
#include <stdio.h>

int main(void) {
	int answer;
	short x = 1;
	long y = 2;
	float u = 3.0;
	double v = 4.4;
	long double w = 5.54;
	char c = 'p';;

	// __DATE__, __TIME__, __FILE__, __LINE__ 为预定义宏
	printf("Date : %s\n", __DATE__);
	printf("Time : %s\n", __TIME__);
	printf("File : %s\n", __FILE__);
	printf("Line : %d\n", __LINE__);
	printf("Enter 1 or 0 : ");
	scanf("%d", &answer);

	// 这是一个条件表达式
	printf("%s\n", answer?"You sayd YES":"You said NO");
	/*
	sizeof三种语法形式
	int i;
	sizeof(i);//ok
	sizeof i;//ok
	sizeof(int);//ok
	sizeofint;//error
	*/
	// 各种数据类型的长度
	//sizeof 本来用 %d ，但有警告要用unsigned long 型的%lu
	printf("The size of int %lu\n", sizeof(answer));
	printf("The size of short %lu\n", sizeof(x));
	printf("The size of long %lu\n", sizeof(y));
	printf("The size of float %lu\n", sizeof(u));
	printf("The size of double %lu\n", sizeof(v));
	printf("The size of long double %lu\n", sizeof(w));
	printf("The size of char %lu\n", sizeof(c));
}
---------------------------------------------------------------------------------------------------------
Date : Jan 10 2017
Time : 11:17:11
File : Untitled.cpp
Line : 16
Enter 1 or 0 : 1//对应条件表达式
You sayd YES
The size of int 4
The size of short 2
The size of long 8
The size of float 4
The size of double 8
The size of long double 16
The size of char 1
---------------------------------------------------------------------------------------------------------





/**/











