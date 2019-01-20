import numpy as np


array：创建数组
array = np.array([[1, 2, 3], [2, 3, 4]])
print('number of dim:', array.ndim)  # 维度
print('shape :', array.shape)    # 行数和列数
print('size:', array.size)   # 元素个数


dtype：指定数据类型(Data type)
int32	整数（- 2147483648 to 2147483647）
int64	整数（- 9223372036854775808 to 9223372036854775807）
uint32	无符号整数（0 to 4294967295）
uint64	无符号整数（0 to 18446744073709551615）
float32	单精度浮点数，包括：1 个符号位，8 个指数位，23 个尾数位
float64	双精度浮点数，包括：1 个符号位，11 个指数位，52 个尾数位


zeros：全0
ones：全1
empty：创建数据接近0
a = np.zeros((3, 4), dtype=np.int32)
print(a)
print(a.dtype)


arrange：按指定范围创建数据
linspace：创建线段
a = np.arange(10, 20, 2)  # 10-19 的数据，2步长
a = np.arange(12).reshape((3, 4))    # 0到11，3行4列
a = np.linspace(0, 10, 21)    # 1-10均匀分成21个数据
a = np.linspace(0, 10, 20).reshape((5, 4))  # 也可reshape

对应元素相乘: a*b
标准矩阵相乘: np.dot(a, b) 或者 a.dot(b)


axis为0代表列，为1代表行
a = np.random.random((2, 4))  # 生成2*4个[0.0, 1.0)之间的数字
print(a)
print("max =", np.max(a, axis=1))  # 最大值
print("max's index =", np.argmax(a, axis=1))  # 最大值的下标

np.cumsum(A) 累加
np.diff(A) 累差，不过是：out[n] = a[n+1] - a[n]
np.diff(x, n=2)是对np.diff(x, n=1)结果递归做一次 diff

print(np.sort(A))  # 排序，每一行升序
print(np.transpose(A))  # 转置法一
print(A.T)  # 转置法二

二维索引
print(A[2, 3])
print(A[2][3])

print(A.flatten())   # 展开性质的函数
# array([3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14])
for item in A.flat:  # flat是迭代器，本身是object属性
    print(item)


A = np.array([1, 1, 1])
B = np.array([2, 2, 2])
C = np.vstack((A, B))      # vertical stack
print("C:\n", C)
print(A.shape, C.shape)  # (3,) (2,3)，这里A还是list
D = np.hstack((A, B))      # horizontal stack
print("D:\n", D)  # [1,1,1,2,2,2]
print(A.shape, D.shape)  # (3,) (6,)


A = A[np.newaxis, :]  # 转为1行3列
# print(A, A.shape)
A = A[:, np.newaxis]  # 转为3行1列
# print(A, A.shape)

print(np.split(A, 3, axis=0))  # 按行分为三等份，默认也是按行
即 print(np.vsplit(A, 3))
print(np.split(A, 2, axis=1))  # 按列分为两等份
即 print(np.hsplit(A, 2))


= 赋值有关联性
copy() 无关联性

Numpy
---------------------------------
Pandas 两个数据结构：Series和DataFrame

