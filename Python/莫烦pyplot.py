import matplotlib.pyplot as plt  # 使用import导入模块matplotlib.pyplot，并简写成plt
import numpy as np
x = np.linspace(-1, 1, 50)  # 范围是(-1,1);个数是50
y1 = 2 * x + 1
y2 = x**2
plt.figure()
plt.plot(x, y1)
plt.show()
plt.figure(num=3, figsize=(8, 5))
plt.plot(x, y1)
plt.plot(x, y2, color='red', linewidth=10.0, linestyle='--')
plt.show()
