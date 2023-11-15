i=-1
a=[]
b=[]
while i==-1:
    z=int(input("enter to list 1 or '0' to exit"))
    if(z==0):
       break;
    else:
        a.append(z)
while i==-1:
    z=int(input("enter to list 2 or '0' to exit"))
    if z==0 :
          break;
    else:
        b.append(z)
print(a)
print(b)
if len(a)==len(b):
    print("list are same length")
else:
    print("list 1 length is", len (a),". list 2 length is",len(b))
if sum(a)==sum(b):
    print("list are same sum",sum(a))
else:
    print("list 1 sum is",sum(a),". list 2 sum is",sum(b))
for n in a:
    for z in b:
        if n==z:
            print(n,"value occurn in both list 1 ",a.index(n),"postion and list 2", b.index(n),"position")
