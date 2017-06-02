typedef struct _COORD {
  SHORT X;
  SHORT Y;
} COORD, *PCOORD;
COORD 结构体定义了控制台屏幕缓冲区中字符单元格的坐标
COORD pos;
它的两个成员是X和Y(单位取决于函数调用)
(0,0) is at the top, left cell of the buffer.


typedef void *HANDLE;//HANDLE == void*



HANDLE GetStdHandle( DWORD nStdHandle );
从一个特定的标准设备（标准输入、标准输出或标准错误）中取得一个句柄（用来标识不同设备的数值）。可以嵌套使用。
//Retrieves a handle to the specified standard device (standard input, standard output, or standard error).
nStdHandle ~~ The standard device. This parameter can be one of the following values.
STD_INPUT_HANDLE	//标准输入的句柄
STD_OUTPUT_HANDLE	//标准输出的句柄
STD_ERROR_HANDLE	//标准错误的句柄

== 彩色的Hello World! ==
#include <stdio.h>
#include <windows.h>
int main()
{
	HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);//实例化句柄hwnd
	SetConsoleTextAttribute(hwnd, FOREGROUND_GREEN);//API设置控制台窗口字体颜色和背景色的函数 ,设置字体颜色为绿色
	printf("hello world!\n");
	return 0;
}
