
n = int(input("Please enter a number between 3 and 9 (inclusive): "))

if n > 2 or n < 10:
    for i in range(1, n + 1):
        print("*" * i)
    for i in range(n - 1, 0, -1):
        print("*" * i)
