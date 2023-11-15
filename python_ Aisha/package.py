from mypackage import mod1
from mypackage import mod2
from mypackage import mod3

m=int(input("Enter the first number "))
n=int(input("Enter the second number "))
s=mod1.sum(m,n)
print("sum",s)
a=mod2.avg(m,n)
print("average",a)
p1=mod3.power(m)
print("power of ",m,"is",p1)
p2=mod3.power(n)
print("power of ",n,"is",p2)
