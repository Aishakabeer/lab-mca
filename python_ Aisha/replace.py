n=input("enter the string wchich has repeated letters ")
print("the original string ",n)
k="$"
res=n[0]+n[1:].replace(n[0],k)
print("replaced string ",(res))
   
