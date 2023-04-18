
n = int(input("Enter value of n: "))
x = int(input("Enter value of x: "))

factorial = lambda num: 1 if num == 0 else num * factorial(num-1)

list = [n/(factorial(i)) for i in range(x+1)]
result = 1 + sum(list)

print("The result is : " , result)
