year=int(input("enter the year to check leapyear or not "))
if year%4==0|(year%4&year%100!=0):
   print("it is leap year ")
else:
   print("it is not a leap year ")


