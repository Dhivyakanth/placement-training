def count_setbits(a):
count=0
while a:
count+= a & 1
a >>= 1
return count
a=int(input("Enter a number:\n"))
print("Number of 1's in binary digit is:",count_setbits(a))
