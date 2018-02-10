import matplotlib.pyplot as plt
plt.plot([0, 1, 2, 3, 4])  # 单个参数，默认y值序列，x为0..N-1，'b-'
plt.plot([1, 2, 3, 4], [1, 4, 9, 16])  # x,y参数对，第二条线换色
plt.plot([1, 2, 3, 4], [1, 8, 27, 64], 'ro')
plt.axis([0, 6, 0, 100])  # [xmin，xmax，ymin，ymax]
plt.show()
