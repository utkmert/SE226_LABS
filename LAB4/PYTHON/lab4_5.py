divided = {'Tony': 41, 'Rhodey': 43, 'Nat': 35}
we_fall = {'Steve': 39, 'Clint': 35, 'Wanda': 28}

united_we_stand = {**divided, **we_fall}
print("***PART A***")
print("Name Age")
for name, age in united_we_stand.items():
    print(f"{name} {age}")
print("***PART B***")
del united_we_stand['Nat']
print("Name Age")
for name, age in united_we_stand.items():
    print(f"{name} {age}")

print("***PART C***")
print("Name Age")
for name, age in sorted(united_we_stand.items()):
    print(f"{name} {age}")

print("***PART D***")
maxAge = max(united_we_stand.values())
minAge = min(united_we_stand.values())
print("Minimum age is: " , minAge)
print("Maximum age is: " , maxAge)