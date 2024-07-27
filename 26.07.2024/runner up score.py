x=int(input())
a=[int(i)for i in input().split()]
b=sorted(a)
if(b[len(b)-1]==b[len(b)-2]):
    print(b[len(b)-3])
else:
    print(b[len(b)-2])
