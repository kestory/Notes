%P=polyfit(X,Y,n) 用n阶多项式拟合X,Y向量给定的数据
%PA=polyval(p,XI) 求XI点上的拟合函数的近似值
clear
x=[168 170 172 174 176 178]
ya=[62.1 63.6 65.1 66.6 68.1 69.7]
yb=[56.4 57.8 59.2 60.6 62.0 63.4]
yc=[53.6 54.9 56.2 57.5 58.9 60.2]
plot(x,ya,'*')
hold on
plot(x,yb,'*')
hold on
plot(x,yc,'*')
hold on
a1=polyfit(x,ya,1)
a2=polyfit(x,yb,1)
a3=polyfit(x,yc,1)
y1=a1(1)*x+a1(2);
y2=a2(1)*x+a2(2);
y3=a3(1)*x+a3(2);
plot(x,y1,'b:',x,y2,'k',x,y3,'g')
p1=polyval(a1,x);
p2=polyval(a2,x);
p3=polyval(a3,x);
hold on 
xx=[173.5]
yy=[57]
plot(xx,yy,'p')