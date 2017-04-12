Wiki
Perl是一种无类型语言（untyped）
只有一种能接受各种类型数据的“无类型”变量
因为Perl大量的创造冗余的语法，并且从其他语言中大量的借鉴语法，使得Perl的语法极其丰富和灵活
There's more than one way to do it
#'Tim Today
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
runoob
不同的执行方式
1、交互式：在命令行中直接执行 perl 代码
$perl  -e <perl code>           # Unix/Linux
命令行参数如下所示：
选项		描述
-d[:debugger]	在调试模式下运行程序
-Idirectory	指定 @INC/#include 目录
-T		允许污染检测
-t		允许污染警告
-U		允许不安全操作
-w		允许很多有用的警告
-W		允许所有警告
-X		禁用使用警告
-e program	执行 perl 代码
file		执行 perl 脚本文件

2、脚本执行
我们可以将 perl 代码放在脚本文件中，通过以下命令来执行文件代码：
$perl  script.pl
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
第一个 perl 程序

print("Hello, world\n");
print "Hello, world\n";

脚本文件可以以 .pl、.PL 作为后缀。

注释(=pod、 =cut只能在行首。)

# 这是一个单行注释
=pdo 注释
这是一个多行注释
这是一个多行注释
这是一个多行注释
这是一个多行注释
=cut

Perl 解释器对在引号外的空白会忽视

Perl " 和 ' 的区别: " " 可以正常解析一些转义字符与变量，而 ' ' 无法解析会原样输出
print "Hello, world\n";    #双引号"
print 'Hello, world\n';     #单引号'
输出
Hello, world
Hello, world\n

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Perl 错误处理
warn 函数
	warn 函数用于触发一个警告信息，不会有其他操作，输出到 STDERR(标准输出文件)，通常用于给用户提示
	chdir('/etc') or warn "无法切换目录";
die 函数
	die 函数类似于 warn, 但它会执行退出，一般用作错误信息的输出
	chdir('/etc') or die "无法切换目录";




$a.=123;
$a.=abc;
print "$a";
123abc
".="是在后面附加(like '+' in C++'string')

$变量=@& x *
会把@&重复*遍
So...
$buf .= "\0" x (510-$n);
$buf .= "\x55\xAA";
就是用\0补充到510个数据，然后加上\x55\xAA
