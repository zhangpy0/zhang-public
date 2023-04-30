import numpy as np
import matplotlib.pyplot as plt

# 风速与x轴夹角
theta = 0
# 风速
v_wind_0 = 5
# 球的半径
r = 0.2
# 球的质量
m = 50
# 空气密度
rho = 1.225
# 初速度
v_0 = 83.333
# 高度
h = 300
# 重力加速度
g = 9.8

# 球的截面积
S = np.pi * r ** 2

C = 0.45

k = 1/2 * rho * S * C

v_wind = v_wind_0 * np.array([np.cos(theta), np.sin(theta),0])
#print(v_wind)
v0 = np.array([v_0, 0, 0])
g_vector = np.array([0, 0, -g])

def dvdt(v, t):
    dvdt = g_vector + k / m *(v_wind - v) * np.linalg.norm(v_wind - v)
    return dvdt

# 步长
dt = 0.01
# 时间
t = np.arange(0, 100, dt)
# 初速度
v = np.array([v_0, 0, 0])
# 位置
x = np.array([0, 0, h])

for i in range(len(t)):
    v = v + dvdt(v, t[i]) * dt
    x = x + v * dt
    print('时间：', t[i], '速度：', v, '位置：', x)
    if x[2] <= 0:
        print('落地时间：', t[i])
        break

# 投放距离
s = np.linalg.norm(x[0:1])
s = np.linalg.norm([s,h])
print('投放距离：', s)
print('当前风速：', v_wind_0, '当前角度：', theta)

