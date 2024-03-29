# 线性代数
## 1.矩阵特征值、特征向量
### 语法
 $e = eig(A)$

 $[V,D] = eig(A)$

 $[V,D,W] = eig(A)$

 $e = eig(A,B)$

 $[V,D] = eig(A,B)$

 $[V,D,W] = eig(A,B)$

 $[ ] = eig(A,balanceOption)$

 $[ ] = eig(A,B,algorithm)$

 $[ ] = eig(  ,outputForm)$

### 示例
 $e = eig(A)$
 返回一个列向量，其中包含方阵 A 的特征值。

### 示例
$[V,D] = eig(A)$ 返回特征值的对角矩阵 D 和矩阵 V，其列是对应的右特征向量，使得 $AV = $VD。

### 示例
 $[V,D,W] = eig(A)$ 还返回满矩阵 W，其列是对应的左特征向量，使得 $W'A = DW'$。

 特征值问题是用来确定方程 Av = λv 的解，其中，A 是 n×n 矩阵，v 是长度 n 的列向量，λ 是标量。满足方程的 λ 的值即特征值。满足方程的 v 的对应值即 
 右特征向量。左特征向量 w 满足方程 w’A = λw’。

### 示例
 $e = eig(A,B)$ 返回一个列向量，其中包含方阵 A 和 B 的广义特征值。

### 示例
 $[V,D] = eig(A,B)$ 返回广义特征值的对角矩阵 D 和满矩阵 V，其列是对应的右特征向量，使得 $AV = BVD$。

## 2.最简行阶梯型
 $r = rref(A)$

## 3.正交规范化
 $o = orth(A)$

## 4.求基础解系
 $x1 = null(A)$ 标准正交基
 $x2 = null(A,'r')$ 有理基

## 5.方阵的迹
 $tr = trace(A)$

## 6.矩阵的秩
 $r = rank(A)$

## 7.行列式
 $d = det(A)$




# 作图

## 二维作图
在Matlab画图的过程中，它并不认识你给出的那个函数，它要做的仅仅是把你给出的函数上的点连成线而已

#### plot和fplot
在Matlab里面做二维图像最基础也是最常用的两个函数：plot()和fplot()函数,其中，plot的经常使用的方法有下面三种：

 $plot(x)$

 $plot(x,y,参数)$

 $plot(x1,y1,x2,y2,...,xn,yn)$

首先，第一种方法里面若x为一维数组，则作出的图像是以其数组长度为横坐标，间隔为1，以数组中的具体值为纵坐标的。而其也可以为复数变量，如下：

 $y = [5,10,15,20]$

 $z = [100,200,300,400]$

 $x =y+z*i$

 这里的x经过此定义将会被认为是一个复数变量，
 图像将会以实部即y为横坐标，虚部即z为纵坐标作图
对于第二种形式就更好理解了，往往其中的x、y都为一维数组，其实y也就是x对应的函数值，后边的参数用于指定曲线的线形、颜色和数据点标记，如下：

 $x = [0:0.01:10]$

 $y = sin(x)$
 
 $plot(x,y,'-r*')$


关于fplot,其基本使用方法如下：

$fplot(f,lims,参数)$

$fplot(funx,funy,tlims,参数)$

在第一种方法中，f代表一个函数，通常采用函数句柄的形式。lims为x轴的取值范围，用二元向量[xmin,xmax]描述，默认值为[-5,5]。参数定义与plot函数相同。例如使用fplot函数绘制sin(x)图像如下：

$fplot(@(x)sin(x),[0,10],'-r')$

## 三维作图

### 三维曲线

#### plot3和fplot3

$plot3(x,y,z,参数)$
$plot3(x1,y1,z1,x2,y2,z2,...,xn,yn,zn)$

如要画出sin(x)的三维图，只需这样就好：

 $x = [0:0.01:10]$

 $y = x$

 $z = sin(x)$

 $plot3(x,y,z,'-r')$



 要绘制个空间的螺旋线，其参数方程为：x=sint+tcost,y=cost-tsint,z=t,只需这样就好：

 $t = [0:0.1:10*pi]$

 $x = sin(t)+t.*cos(t)$

 $y = cos(t)-t.*sin(t)$

 $z = t$

 $plot3(x,y,z)$



### 三维曲面

在做三维曲面图的时候，第一步往往是生成一个平面网格，这个平面网格是什么东西呢，其实就是用矩阵X、Y分别存储每一个小矩形顶点的x坐标与y坐标，矩阵X、Y就是该矩形区域的xy平面网格坐标矩阵：

说的简单些，就是给我们要用的空间坐标系做个底面出来，本来x、y都是一维向量，它们也就是只能当两根轴，这个时候用新的两个X、Y矩阵来把空间坐标系的二维地面给表示出来，这样的话每一个[X,Y]就都能对应一个Z了，就是这个意思。在MATLAB中，产生平面区域内网格坐标矩阵有两种方法

#### 1.利用矩阵运算生成：

 $X = ones(size(y))*x$

 $Y = y*ones(size(x))$

#### 2.利用meshgrid函数生成：
 
 $[X,Y] = meshgrid(x,y)$

#### 绘制三维曲面的函数

$mesh(x,y,z,c)$

$surf(x,y,z,c)$

$mesh(z,c)$

$surf(z,c)$


其中，x、y是网格坐标矩阵，z是网格点上的高度矩阵，c用于指定在不同高度下的曲面颜色。c省略时，颜色的设定正比于图形的高度。 当x、y省略时，z矩阵的第2维下标当作x轴坐标，z矩阵的第一维下标当作y轴坐标。 另外还有一些其它的绘制三维曲面的函数：

>带等高线的三维网格曲面函数meshc

>带底座的三维网格曲面函数meshz

>具有等高线的曲面函数surfc

>具有光照效果的曲面函数surfl

这些函数使用都和mesh还有surf大致相同

用4种方式绘制函数$z=(x-1)^2+(y-2)^2-1$的曲面图
其中，
$x=[0,2],y=[1,3]$

 $[x,y]=meshgrid(0:0.1:2,1:0.1:3)$

 $z=(x-1).^2+(y-2).^2-1$
 
 $subplot(2,2,1);meshc(x,y,z)$

 $subplot(2,2,2);meshz(x,y,z)$

 $subplot(2,2,3);surfc(x,y,z)$
 
 $subplot(2,2,4);surfl(x,y,z)$
 
#### 图形标注函数
> title(图形标题)

> xlabel(x轴说明)

> ylabel(y轴说明)

> text(x,y,文本说明)

> legend(图1，图2，...，参数...)
