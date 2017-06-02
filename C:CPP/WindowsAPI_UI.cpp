Windows API编程//new project -> win32 project
case WM_LBUTTONDOWN:
	MessageBox(hWnd, _T("I'm Saying\nMu ha ha"), _T("Caption"), MB_ICONEXCLAMATION | MB_YESNOCANCEL | MB_DEFBUTTON2);
	//一个惊叹号 | 三个选项 | 默认放在第二个选项
break;
