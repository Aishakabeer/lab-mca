lists = []
def squares(a,b):
    for i in range(a,b+1):
        j=1
        while j*j <= i:
            if j*j == i:
                lists.append(str(i))
            j = j + 1
        i = i+1
    return lists
print("perferct square list\n",squares(1000,9999))


