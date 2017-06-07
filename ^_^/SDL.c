gcc 编译时可以加上 `sdl-config --cflags --libs` 选项//the provided tool by SDL sdl-config
g++ sdlExample.cpp `sdl-config --cflags --libs` -o sdlExample
//an alternative syntax
g++ sdlExample.cpp $(sdl-config --cflags --libs) -o sdlExample
====================================
| 两个反单引号``用于命令替换 |
--------------------------------
$ date
Wed Jun  7 21:50:48 CST 2017
$ echo Today is `date`
Today is Wed Jun 7 21:50:54 CST 2017
====================================
$ sdl-config --cflags --libs
-I/usr/local/include/SDL -D_GNU_SOURCE=1 -D_THREAD_SAFE
-L/usr/local/lib -lSDLmain -lSDL -Wl,-framework,Cocoa
可以看到"sdl-config --cflags --libs"这个命令的输出

$ echo g++ sdlExample.cpp `sdl-config --cflags --libs` -o sdlExample
就可以看到那个命令输出和原来命令的结合
====================================


C语言探索之旅：SDL开发游戏之安装SDL
http://www.toutiao.com/a4450957327/
