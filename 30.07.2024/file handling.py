a=int(input("Enter the number : "))
b=int(input("enter the number to divide : "))
try:
    r=a/b
except ZeroDivisionError:
    print("Error : Number Division By Zero Not Possible")
else:
    print(f"{a}/{b}={r}")
finally:
    print("Program Compiled Without Error")
