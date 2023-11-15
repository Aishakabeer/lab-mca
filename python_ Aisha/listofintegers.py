s=[]
n=int(input("how many value to be inserted ?"))
for i in range(0,n):
    e=int(input("enter the int "))
    if(e>100):
      s.append("over")
    else:
      s.append(e)
print(s)
