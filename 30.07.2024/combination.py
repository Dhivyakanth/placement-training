from itertools import combinations_with_replacement
m=input().split()
k=''.join(sorted(m[0]))
c=combinations_with_replacement(k,int(m[1]))
for i in c:
    print(''.join(i))
