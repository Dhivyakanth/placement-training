RANGE OF ARMSTRONG NUMBERS
x=int(input("Enter the starting range : "))
y=int(input("Enter the endind range : "))
print("Armstrong numbers :")
for n in range(x,y):
    s=0
    a=str(n)
    for i in range(len(a)):
        s=s+int(a[i])**len(a) 
    if n==s:
        print(n)

