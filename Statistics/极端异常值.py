import pandas as pd
incomes = [25590, 23306, 26780, 29463, 22485, 262490, 24985, 1689.5, 17700, 18257, 24132, 21479, 19304, 16511, 18573, 26606, 20917, 19394, 24322, 28383, 16478, 29062, 23232, 17580, 26804, 28500, 25018, 24001, 27530, 27459, 22776, 19835, 16475, 15201, 28801, 19509, 19098, 17993, 15131, 26187, 25022, 27430, 19114, 18295, 25365, 23550, 20413, 19335, 21286, 22911]
# 会计不小心把某个人的月薪26249变成262490了，某个人的月薪16895变成1689.5了
four = pd.Series(incomes).describe()
print(four)
# 样本数量，均值，标准差，最小值、最大值，以及3个四分位数
print('Q1= {0}, Q2= {1}, Q3={2}'.format(four['25%'], four['50%'], four['75%']))
# 极端异常值的计算
Q1 = four['25%']
Q3 = four['75%']
IQR = Q3 - Q1  # 四分位差
upper = Q3 + 1.5 * IQR
lower = Q1 - 1.5 * IQR
# 高于upper或者低于lower的值都属于异常极端值
print(upper, lower)

# 画图
incomes = pd.DataFrame(incomes)
import seaborn as sns
import matplotlib.pyplot as plt
# 1.5是经验积累得出的标准，一般不做调整
sns.boxplot(data=incomes, palette="Set1")
plt.show()
# 黑色菱形是异常值
