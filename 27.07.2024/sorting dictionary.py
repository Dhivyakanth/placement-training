a={}
b=int(input("Enter no of keys:\n"))
for i in range(b):
key=int(input("Enter age:\n"))
value=input("Enter name:\n")
a[key]=value
print(a)
c=dict(sorted(a.items()))
print("sorted dictionary by its key value:",c)
