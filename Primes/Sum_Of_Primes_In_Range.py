lower = int(input("Enter lower bound"))
upper = int(input("Enter upper bound"))
sum = 0
for num in range(lower, upper + 1):
   if num > 1:
       for i in range(2, num):
           if (num % i) == 0:
               break
       else:
           sum = sum + num
print("sum of primes in between ", lower, " and ", upper, "is",sum)
