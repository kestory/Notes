使用Windows API编程//new project -> win32 project
case WM_LBUTTONDOWN:
MessageBox(hWnd, _T("I'm Saying\nMu ha ha"), _T("Caption"), MB_ICONEXCLAMATION | MB_YESNOCANCEL | MB_DEFBUTTON2);
//一个惊叹号 | 三个选项 | 默认放在第二个选项
break;






typedef struct _COORD {
  SHORT X;
  SHORT Y;
} COORD, *PCOORD;
COORD结构体
COORD pos;
它的两个成员是X和Y	(0,0) is at the top, left cell of the buffer.
