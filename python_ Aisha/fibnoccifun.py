def fibnocci(n):
   f1=0
   f2=1
   print(f1,end=" ")
   print(f2,end=" ")
   f3=f1+f2
   while(f3<=n):
    print(f3,end=" ")
    f1=f2
    f2=f3
    f3=f1+f2
i=int(input("enter the num "))
fibnocci(i)
    
