使用Windows API编程//new project -> win32 project
case WM_LBUTTONDOWN:
	MessageBox(hWnd, _T("I'm Saying\nMu ha ha"), _T("Caption"), MB_ICONEXCLAMATION | MB_YESNOCANCEL | MB_DEFBUTTON2);
	//一个惊叹号 | 三个选项 | 默认放在第二个选项
break;



typedef struct _COORD {
  SHORT X;
  SHORT Y;
} COORD, *PCOORD;
COORD 结构体定义了控制台屏幕缓冲区中字符单元格的坐标
COORD pos;
它的两个成员是X和Y(单位取决于函数调用)
(0,0) is at the top, left cell of the buffer.


typedef void *HANDLE;//HANDLE == void*

