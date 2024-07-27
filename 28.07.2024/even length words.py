str = input("enter string")
words = list(str.split(" "))
print("string: ", str)
print("Even length words:")
for i in words:
    if len(i) % 2 == 0:
        print(i)
