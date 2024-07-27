n = int(input())
student = {}
for _ in range(n):
    a = input().split()
    name = a[0]
    marks = list(map(float, a[1:]))
    student[name] = marks
b = input()
marks = student[b]
average = sum(marks) / len(marks)
print(f"{average:.2f}")
