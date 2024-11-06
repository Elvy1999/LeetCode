import math
import random

def get_count(sentence):
  vowels = "a e i o u".split(" ")
  count = 0
  for letter in sentence:
    if(letter in vowels):
      count+=1
  return(count)

def beeramid(bonus, price):
    if(bonus <= 0): return 0
    totalBeers = bonus/price
    summedBeers = 0
    i = 0
    while(summedBeers <= totalBeers):
      summedBeers += i**2
      i+=1
    if(summedBeers > totalBeers): 
      i -= 2
    return i;
  

# number = int(input("Enter a number:"))
# divisors = []
# for i in range(1,number+1):
#   if number%i == 0:
#     divisors.append(i)
# print(divisors)
# a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]
# b = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]

# common = []
# shorterList = len(a) if len(a) < len(b) else len(b)
# for i in range (shorterList):
#   if (a[i] in b) and (a[i] not in common):
#     common.append(a[i]);
# print(common)

# s

a = [1, 4, 9, 16, 25, 36, 49, 64, 81, 100]
evens = [number for number in a if number%2 == 0 ]
print(evens)
randomNumber = random.randint(1,10)
guess = None
while guess != randomNumber:
  guess = int(input("Guess a random number:"))
  if guess > randomNumber:
    print("Guess is to high")
  elif guess < randomNumber:
    print("Guess is too low")
print(f"You guessed the correct random number: {randomNumber}")