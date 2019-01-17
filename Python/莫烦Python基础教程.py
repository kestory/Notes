a = range(10)  # range() 函数可创建一个整数列表，从 0 开始到 10
while a:  		# 判断列表是否空
    print(a[-1])  # 打印出最后一个内容
    a = a[:len(a)-1]  # 切片操作去掉最后一个元素

for i in range(10):
    print(i)
    print('inner of for')
print('outer of for')


没有类似 condition ? value1: value2 三目操作符
有 if-else 的行内表达式：var = var1 if condition else var2


# 函数定义
def func(a, b, x=1):  # 设置了默认参数
    c = a+b+x
    print('the c is ', c)


func(b=2, a=1)  # 指明特定的参数的话，参数的位置将不受影响


# 全局变量 & 局部变量
a = None


def fun():
    global a    # 使用全局里定义的 a
    a = 20


print('a past:', a)  # None
fun()
print('a now:', a)   # 20


my_file = open('myfile.txt', 'a')   # 'a'=append 以增加内容的形式打开，'w':write;'r':read
my_file.write('\nthe new text')
my_file.close()

content = file.read()  # 读取文本的所有内容
content = file.readline()  # 读取一行
content = file.readlines()  # python_list 形式

基本集合：list、 tuple 、dict 和 set
L[-2] 倒数第二个元素
L[1:] 从第二个元素开始截取

a_tuple = (12, 3, 5, 15, 6)  # 元组，用园括号、或者无括号来表述，元素不能修改
a_list = [12, 3, 67, 7, 82]  # 列表，用方括号来表述


a = [1, 2, 3, 4, 1, 1, -1]
a.append(0)  # 在a的最后面追加一个0
print(a)
a.insert(1, 0)  # 在位置1处添加0
print(a)
a.remove(2)  # 删除列表中第一个出现的值为2的项
print(a)
a = [1, 2, 3, 4, 1, 1, -1]
print(a.index(4))  # 显示列表a中第一次出现的值为4的项的索引
print(a.count(1))  # 统计列表a中1出现的次数
a.sort()  # 默认从小到大排序
print(a)
a.sort(reverse=True)  # 从大到小排序
print(a)


dict = {'a': 1, 'b': 2, 'b': '3'}  # 字典，用花括号来表述


复利1 %，五年后那一年就是5%
# zip 将对象中对应的元素打包成元组，返回这些元组组成的对象，节约内存
a = [1, 2, 3, 4, 5]
b = [4, 5, 6, 7]
c = ['a', 'b', 'c']
abc = zip(a, b, c)
print(list(abc))
for i, j, k in zip(a, b):  # 这里abc和list(abc)都不行
    print(i, j, k)


x = int(input('x='))
print(b, end=',')


b = a  # 两者地址都一样
c = copy.copy(a)  # 浅拷贝对内部元素会地址一样
e = copy.deepcopy(a)  # 深拷贝彻底无关
