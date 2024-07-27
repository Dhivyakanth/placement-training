n = int(input())
primary = 0
secondary = 0
for i in range(n):
    row = list(map(int, input().split()))
    primary += row[i]
    secondary += row[n - 1 - i]
difference = abs(primary - secondary)
print(difference)
