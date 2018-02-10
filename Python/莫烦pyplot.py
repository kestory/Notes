import matplotlib.pyplot as plt  # 使用import导入模块matplotlib.pyplot，并简写成plt
import numpy as np
x = np.linspace(-1, 1, 50)  # 范围是(-1,1);个数是50
y1 = 2 * x + 1
y2 = x**2
plt.figure()
plt.plot(x, y1)
plt.show()
plt.figure(num=3, figsize=(8, 5), dpi=80)
plt.plot(x, y1)
plt.plot(x, y2, color='red', linewidth=10.0, linestyle='--')
plt.show()


plt.xlim((-1, 2))
plt.ylim((-2, 3))
==axis

new_ticks = np.linspace(-1, 2, 7)
print(new_ticks)
plt.xticks(new_ticks)
plt.yticks([-2, -1.8, -1, 1.22, 3],
           [r'$really\ bad$', r'$bad\ \alpha$', r'$normal$', r'$good$', r'$really\ good$'])
# gca='get current axis'获取当前坐标轴信息
ax = plt.gca()
# 使用.spines设置边框
# 使用.set_color设置边框颜色，默认白色
ax.spines['right'].set_color('none')
ax.spines['top'].set_color('none')
# 使用.set_position设置边框位置：y=0的位置
ax.spines['bottom'].set_position(('data', 0))  # outward，axes，data
ax.spines['left'].set_position(('data', 0))

ax.xaxis.set_ticks_position('top')  # top，bottom，both，default，none
ax.yaxis.set_ticks_position('right')  # left，right，both，default，none

plt.show()
