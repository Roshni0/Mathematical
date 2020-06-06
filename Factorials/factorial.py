def factorial(n): #factorial function
    if n == 0:
        return 1
    else:
        return n * factorial(n-1) #recursive
n=int(input("Input a number to compute the factiorial : ")) #usef input
print(factorial(n))
