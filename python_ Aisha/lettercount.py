list=["input","output","computer"]
c=0
print(list)
w=input("enter the letter to find the occurance ")
for i in list:
    for f in i:
        if f==w:
          c=c+1
print("number of",w,"is :",c) 
