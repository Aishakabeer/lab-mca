n=int(input("enter the value on n :"))
fact=1
if n<0:
    print("not exist")
elif n==0:
    print("1")
else:
    for i in range(1,n+1):
       fact=i*fact
print(n,"!",fact)

