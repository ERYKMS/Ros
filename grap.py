import numpy as np
import matplotlib.pyplot as plt

x = np.array([80, 85, 90, 95, 100, 105, 110, 115, 120, 125])
y = np.array([160, 165, 170, 180, 185, 190, 195, 200, 205, 210])

plt.title("Weight Size Graph")
plt.xlabel("Weight")
plt.ylabel("Size")

plt.plot(x, y)

plt.grid(color='blue',linestyle=':')

plt.scatter(x,y,color='red')

plt.show() 