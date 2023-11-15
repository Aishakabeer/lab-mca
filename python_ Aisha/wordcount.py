n=input("enter the string?")
w=input("which word you want to count ")
c=0
list=n.split();
for i in list:
   if i==w:
      c=c+1
print("word is ",c,"times ")
