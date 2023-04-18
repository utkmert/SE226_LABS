def myFunc(n):

    global sum
    if n == 0:
        return
    else:
        tempSum = 0

        for k in range(1, n + 1):
            tempSum += ((-1) ** (k + 1)) / k
        sum += tempSum

        myFunc(n - 1)


total = 0
myFunc(5)

print(sum)