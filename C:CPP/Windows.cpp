typedef struct _COORD {
  SHORT X;
  SHORT Y;
} COORD, *PCOORD;
COORD 结构体定义了控制台屏幕缓冲区中字符单元格的坐标
COORD pos;
它的两个成员是X和Y(单位取决于函数调用)
(0,0) is at the top, left cell of the buffer.


typedef void *HANDLE;//HANDLE == void*

