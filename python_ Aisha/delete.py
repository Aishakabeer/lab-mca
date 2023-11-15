dict1={'a': 1,'b' :2,'c':3,'d':4}
print("initial dict")
print(dict1)
k=(input("enter the key delete (a-d):"))
if k in dict1:
    del(dict1[k])
else:
     print("key not found")
     exit(0)
print("updated dictionary")
print(dict1)
   
