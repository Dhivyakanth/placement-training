x = int(input("Enter a number: "))
sum = 0
z = x
while z > 0:
   num = z % 10
   sum += num ** 3
   z //= 10
if x == sum:
   print(x,"is an Armstrong number")
else:
   print(x,"is not an Armstrong number")
