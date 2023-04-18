guess = "computer" # change this to your desired word with 8 letters

print("Welcome to the guessing game!")
print("Please enter 4 strings, 2 starting with consonants and 2 starting with non-consonants.")

consonant1 = input("Consonant 1: ").lower()
consonant2 = input("Consonant 2: ").lower()
non_consonant1 = input("Non-consonant 1: ").lower()
non_consonant2 = input("Non-consonant 2: ").lower()

score = 0

# check if consonant1 is a substring of guess
if consonant1 in guess:
    score += guess.count(consonant1)

# check if consonant2 is a substring of guess
if consonant2 in guess:
    score += guess.count(consonant2)

# check if non_consonant1 is a substring of guess
if non_consonant1 in guess:
    score += guess.count(non_consonant1)

# check if non_consonant2 is a substring of guess
if non_consonant2 in guess:
    score += guess.count(non_consonant2)

print ("Your score is: " + score)
if score >= 4:
    print("You win the game.")
else:
    print("You lose the game.")