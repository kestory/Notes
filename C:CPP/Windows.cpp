-------COORD struct-------
typedef struct _COORD {
  SHORT X;
  SHORT Y;
} COORD, *PCOORD;
COORD 结构体定义了控制台屏幕缓冲区中字符单元格的坐标
COORD pos;
pos的两个成员是X和Y(单位取决于函数调用)
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



=======windows操作系统下system()函数=======
int system(char *command);//这里就是调用windows的DOS命令，和在CMD里面使用一样
system("pause")可以实现冻结屏幕，便于观察程序的执行结果
system("CLS")可以实现清屏操作//windows不管大小写的呀
~~system()调用color命令~~
COLOR [attr]//attr - 颜色属性，由两个十六进制数字指定 -- 第一个为背景，第二个则为前景
每个数字可以为以下任何值之一，大小写无所谓，若前景和背景颜色相同，和不设置一样
0 = 黑	 	8 = 灰色
1 = 蓝色	9 = 淡蓝色
2 = 绿色	A = 淡绿色
3 = 浅绿色 	B = 淡浅绿色
4 = 红色	C = 淡红色
5 = 紫色	D = 淡紫色
6 = 黄色	E = 淡黄色
7 = 白色	F = 亮白色
system("color 0b");//黑底浅绿
这里都是全局变色，且只看最后一个system("color **");

==============只一行变色==============
#include <windows.h>
#include <stdio.h>
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, 4);
cout << "这行是红的，下面变回白色，不过前提全是黑色背景";
SetConsoleTextAttribute(hConsole, 7);

-------SetConsoleTextAttribute 函数-------
BOOL SetConsoleTextAttribute( HANDLE hConsoleOutput,WORD wAttributes);
一共有16种文字颜色，16种背景颜色，可以通过
文字颜色 + 背景颜色 * 0x10 来设置控制台的颜色
wAttributes			颜色			对应的值
FOREGROUND_BLUE		text color：蓝		1
FOREGROUND_GREEN		text color：绿		2
FOREGROUND_RED		text color：红		4
FOREGROUND_INTENSITY	前景色高亮显示		8
//背景颜色其实就是上面值*0x10
BACKGROUND_BLUE		background color：蓝	16
BACKGROUND_GREEN		background color：绿	32
BACKGROUND_RED		background color：红	64
BACKGROUND_INTENSITY	背景色高亮显示		128
//白色即用FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE，也可以直接用7表示
一共有16种文字颜色，16种背景颜色，组合有256种
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
	SetColor(40, 30);//之后都是绿底黄字
	std::cout << "Hello world!" << endl;
	std::cout << "Hello world!" << endl;
	return 0;
}
=======
#include <windows.h>
void Sleep(DWORD dwMilliseconds);  参数为毫秒
-------^ win | unix v-------sleep函数
#include <unistd.h>
unsigned int sleep(unsigned int seconds);参数为毫秒 （如果需要更精确可以用usleep，单位为微秒）
=======
Windows API编程//new project -> win32 project
case WM_LBUTTONDOWN:
	MessageBox(hWnd, _T("I'm Saying\nMu ha ha"), _T("Caption"), MB_ICONEXCLAMATION | MB_YESNOCANCEL | MB_DEFBUTTON2);
	//一个惊叹号 | 三个选项 | 默认放在第二个选项
break;
