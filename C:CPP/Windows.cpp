-------COORD struct-------
typedef struct _COORD {
  SHORT X;
  SHORT Y;
} COORD, *PCOORD;
COORD 结构体定义了控制台屏幕缓冲区中字符单元格的坐标
COORD pos;
它的两个成员是X和Y(单位取决于函数调用)
(0,0) is at the top, left cell of the buffer.


-------HANDLE == void*-------
typedef void *HANDLE;//


-------GetStdHandle(STD_OUTPUT_HANDLE)-------
HANDLE GetStdHandle( DWORD nStdHandle );
从一个特定的标准设备（标准输入、标准输出或标准错误）中取得一个句柄（用来标识不同设备的数值）。可以嵌套使用。
//Retrieves a handle to the specified standard device (standard input, standard output, or standard error).
nStdHandle	The standard device. This parameter can be one of the following values.
	STD_INPUT_HANDLE	//标准输入的句柄
	STD_OUTPUT_HANDLE	//标准输出的句柄
	STD_ERROR_HANDLE	//标准错误的句柄

-------DWORD-------
DWORD 双字即为4个字节，每个字节是8位，共32位
//A DWORD is a 32-bit unsigned integer (range: 0 through 4294967295 decimal).
typedef unsigned long DWORD, *PDWORD, *LPDWORD;



== 彩色的Hello World! ==
#include <stdio.h>
#include <windows.h>
int main()
{
	HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);//实例化句柄hwnd
	SetConsoleTextAttribute(hwnd, FOREGROUND_GREEN);//API设置控制台窗口字体颜色和背景色的函数 ,设置字体颜色为绿色
	printf("hello world!\n");//仍黑底，仅字绿
	return 0;
}
=======
#include <windows.h>//GetStdHandle && SetConsoleTextAttribute
#include <iostream>
using namespace std;
void SetColor(unsigned short ForeColor = 3, unsigned short BackGroundColor = 0) //给参数默认值，使之可以接受0/1/2个参数
{
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);//得到控制台输出设备的句柄
	SetConsoleTextAttribute(hCon, ForeColor | BackGroundColor);
}
int main()
{
	SetColor();
	std::cout << "Hello world!" << endl;
	SetColor(40, 30);//之后都是绿低黄字
	std::cout << "Hello world!" << endl;
	std::cout << "Hello world!" << endl;
	return 0;
}
=======windows操作系统下system()函数=======
system - execute a shell command//这里就是和在windows的CMD里面使用这些命令一样
system("pause")可以实现冻结屏幕，便于观察程序的执行结果
system("CLS")可以实现清屏操作//windows不管大小写的呀。。
system()调用color命令
COLOR [attr]
system("color fc");//在亮白色上产生亮红色
