a=int(input("enter the current year"))
b=int(input("enter the year to show the leapyear upto:"))
for i in range(a,b+1):
    if i%4==0 and i%100!=0 or i%400==0:
       print(i)    



