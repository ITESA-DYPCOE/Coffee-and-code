def factorial(n):
    fact=1
    for i in range(1,n+1):
        fact=fact*i
    return fact



num=int(input("Enter number to find its Factorial : "))
print(factorial(num))
    