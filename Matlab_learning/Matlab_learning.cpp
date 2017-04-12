p50=taylor(f,'Order',5,'ExpansionPoint',0)
这种方式叫做 Name-Value Pair Arguments，
就是 'name', value 的形式，参数名字以引号形式给出，参数具体数值由后面的 value 给出

exp(x)
指数	e^x	e=2.7183

magic(N)产生N-by-N魔方矩阵(1-N^2且行列斜线都相等)

>>edit
新建.m文件
记得command+s然后在控制台>>filename

(x - 1)*(x - 2)*(x - 3)	==	x^3 - 6*x^2 + 11*x - 6
A = [1 2 3]
B = poly(A) %A是向量时是多项式，A是矩阵时是特征向量
B =
     1    -6    11    -6	%poly
C = poly2str(b,'v')
C =
     v^3 - 6 v^2 + 11 v - 6%str
sym2poly(C)
ans =
     1    -6    11    -6
poly2sym(C,'x')
ans =
     x^3 - 6*x^2 + 11*x - 6

summary:sym str是人写的，poly是省略次方数，原向量是因式分解的()()()中被减的常数

清除变量
clear%运行m文件之前一般都需要该命令

清理当前命令窗口
clc%clear command window

clf%清除当前激活的figure

exp(-x) .* sin(x); % Note the dot!

C = unique(A) returns the same data as in A, but with no repetitions. C is in sorted order.

统计一个数组中各字符出现了多少次(频数)
制图: hist(x , unique(x))
不制图: h = hist(x, unique(x))

频数以及频率
tabulate(a(:))
字符串的话
>> x = ['If x is a numeric array, TABLE is a numeric matrix.']';
>> tabulate(x)

tabulate很神奇，但会把频数为0的也统计，加个0.0（如果不影响的话）就不会冗余统计了

a=sum(A)  %列求和
b=sum(A,2) %行求和

c=sum(A(:)) %矩阵求和
sum(sum(a))


Excel中想转置，右键，选择性粘贴，然后勾选转置

炫绿色
barh(b,'stack','FaceColor',[0 .5 .5],'EdgeColor',[0 .9 .9],'LineWidth',1.5)