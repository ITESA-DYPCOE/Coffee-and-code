"""     fibonacci series:
                1 1 2 3 5 8 13 21 34.....n terms
"""


def fibonacci(n):
    a=1;b=1
    print(a,end=' ')
    print(b,end=' ')
    for _ in range(n):
        c=a+b
        print (c,end=' ')
        a=b
        b=c
    c=a+b
    pass
n=int(input("Enter the no. of terms u want: "))
fibonacci(n)