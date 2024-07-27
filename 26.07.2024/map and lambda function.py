cube = lambda x:x**3# complete the lambda function 

def fibonacci(n):
    lst = []
    a = 0
    b = 1
    for i in range(n):
        c = a+b
        lst.append(a)
        a = b
        b = c
    return lst

if __name__ == '__main__':
    n = int(input())
    print(list(map(cube, fibonacci(n))))
