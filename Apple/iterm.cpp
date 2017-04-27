双击选中，三击选中整行，四击智能选中
选中即复制

⌘ + d：左右分屏
⇧⌘ + d：上下分屏

⌘ + ; ：自动补全历史记录
⌘ + ⇧ + h：剪贴板历史
⌥⌘ + b：历史回放

⌘ + / ：显示光标位置
⌘ + ⌥ + e：全屏展示所有的 tab，且可以搜索


⌃ + l：清屏

What is the difference between shell, console, and terminal?
In the linux world they can all look the same from the point of view of the user at the keyboard. The differences are in how they interact with each other.

The shell is the program which actually processes commands and returns output. Most shells also manage foreground and background processes, command history and command line editing. These features (and many more) are standard in bash, the most common shell in modern linux systems.

A terminal refers to a wrapper program which runs a shell. Decades ago, this was a physical device consisting of little more than a monitor and keyboard. As unix/linux systems added better multiprocessing and windowing systems, this terminal concept was abstracted into software. Now you have programs such as Gnome Terminal which launches a window in a Gnome windowing environment which will run a shell into which you can enter commands.

The console is a special sort of terminal. Historically, the console was a single keyboard and monitor plugged into a dedicated serial console port on a computer used for direct communication at a low level with the operating system. Modern linux systems provide virtual consoles. These are accessed through key combinations (e.g. Alt+F1 or Ctrl+Alt+F1; the function key numbers different consoles) which are handled at low levels of the linux operating system -- this means that there is no special service which needs to be installed and configured to run. Interacting with the console is also done using a shell program.

Terminal 和 Console 的区别是什么?
在古老的年代，一个机构可能只有一台主机，而机构的职员使用电传打印机（Teletypewritter 又简称为tty）通过串口连接到主机。后来人们又在电传打印机的基础上进行了改进，程序的输出不再是打印到纸带上而是显示在荧幕上，后来还支持彩色显示，这样的设备后来被称为终端（Terminal）。一台主机可以有很多个终端，早期的主机只支持串口线的终端，对应的设备叫做串口终端（Serials Terminal），后来又发展出了伪终端，以便于支持GUI，后来串口终端渐渐被图形界面的伪终端取代，也就是我们今天所说的终端。
但是在主机的系统启动完成之前，终端是不能连接到主机上的。为了能记录出主机开机过程的日志，也便于在主机出故障无法启动操作系统时进行检修维护，有多了一个叫做控制台的设备。一台主机有且只能有一个控制台。文件主机的重要日志，比如开机关机的日志和记录，重要应用程序的日志，都会输出到控制台来。
