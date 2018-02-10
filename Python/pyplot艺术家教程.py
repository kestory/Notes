import numpy as np
import matplotlib.pyplot as plt
plt.plot([0, 1, 2, 3, 4])  # 单个参数，默认y值序列，x为0..N-1，'b-'
plt.plot([1, 2, 3, 4], [1, 4, 9, 16])  # x,y参数对，第二条线换色
plt.plot([1, 2, 3, 4], [1, 8, 27, 64], 'ro')
plt.axis([0, 6, 0, 100])  # [xmin，xmax，ymin，ymax]
plt.show()


t = np.arange(0., 5., 0.2)  # 均匀取值
plt.plot(t, t, 'r--', t, t**2, 'bs', t, t**3, 'g^')
# red dashes, blue squares and green triangles
plt.show()

subplot(numrows, numcols, fignum)  # fignumc从1…numrows * numcols
axes([left, bottom, width, height])  # 任意位置

plt.xlabel('my data', fontsize=14, color='red')
plt.ylabel('Probability')
plt.title('Histogram of IQ')
plt.text(60, .025, r'$\mu=100,\ \sigma=15$')
