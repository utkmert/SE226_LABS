print("***PART A***")
list = {i: (i-1)* i for i in range (1,31)}
print(list)

print("***PART B***")
for key,value in list.items():
    print(key ,":",value)

print("***PART C***")
sum = 0
for value in list.values():
    sum += value
print("Sum : " , sum)

print("***PART D***")
while True:
    userInput = int(input("Enter a number to remove: "))
    if userInput < 1 or userInput > 30:
        print("Number must be between 1 and 30.")
        continue
    del list[userInput]
    print("You removed" , userInput , "successfully.")
    print(list)
    break





