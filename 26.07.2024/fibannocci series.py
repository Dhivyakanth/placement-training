n=int(input("Enter a number:\n"))
a=0
b=1
res=0
if(n<=1):
print(a)
else:
print(a ,b)
for i in range(3,n+1):
res=a+b
a=b
b=res
print(res)
