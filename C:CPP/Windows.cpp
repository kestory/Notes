typedef struct _COORD {
  SHORT X;
  SHORT Y;
} COORD, *PCOORD;
COORD 结构体定义了控制台屏幕缓冲区中字符单元格的坐标
COORD pos;
它的两个成员是X和Y(单位取决于函数调用)
(0,0) is at the top, left cell of the buffer.


typedef void *HANDLE;//HANDLE == void*

#include <stdio.h>
#include <windows.h>
int main(void)
{
	HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);//实例化句柄hwnd
	SetConsoleTextAttribute(hwnd, FOREGROUND_GREEN);//API设置控制台窗口字体颜色和背景色的函数 ,设置字体颜色为绿色
	printf("hello world!\n");
	return 0;
}
