import math
import random

# def get_count(sentence):
#   vowels = "a e i o u".split(" ")
#   count = 0
#   for letter in sentence:
#     if(letter in vowels):
#       count+=1
#   return(count)

# def beeramid(bonus, price):
#     if(bonus <= 0): return 0
#     totalBeers = bonus/price
#     summedBeers = 0
#     i = 0
#     while(summedBeers <= totalBeers):
#       summedBeers += i**2
#       i+=1
#     if(summedBeers > totalBeers): 
#       i -= 2
#     return i;
  

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

# a = [1, 4, 9, 16, 25, 36, 49, 64, 81, 100]
# evens = [number for number in a if number%2 == 0 ]
# print(evens)
# randomNumber = random.randint(1,10)
# guess = None
# guesses = 0
# while guess != randomNumber:
#   guess = int(input("Guess a random number:"))
#   if guess > randomNumber:
#     print("Guess is to high")
#   elif guess < randomNumber:
#     print("Guess is too low")
#   guesses+=1
# print(f"You guessed the correct random number: {randomNumber}")
# print(f"It took you {guesses} guesses")

a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]
b = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]


# def combineList(a,b):
#   combineList = list(set([num for num in a if num in b]))
#   return combineList

# print(combineList(a,b))

# number = int(input("Enter a number to check if it is prime:"))
# def primeChecker(number):
#   ceiling = int(math.sqrt(number))
#   for i in range(2,ceiling+1):
#     if(number%i==0):
#       return print(f"{number} is not a prime number")
#   return print(f"{number} is a prime number")

# print(primeChecker(number)) 

# count = int(input("How many Fibonacci numbers do you want to generate: "))

# def fibonacciGen(number):
#   fibonacciNums = []
#   a = 0
#   b = 1
#   for _ in range(number):
#     fibonacciNums.append(a)
#     a = b
#     b = a+b
#   return fibonacciNums

# print(fibonacciGen(count))

# def smallestNumber(numbers):
#   smallest = None
#   biggest = None
#   for number in numbers:
#     if smallest is None or number < smallest:
#       smallest = number
#     if biggest is None or number > biggest:
#       biggest = number
#   print(f"The smallest number is {smallest} and the biggest is {biggest}")
#   return [smallest,biggest]

# numbers = [55,34,2,3,1,88,99,-1]

# print(smallestNumber(numbers))

# s = "Monty Python"
# print(s[1:])
# print(s.find("onty"))
# words = 'His e-mail is q-lar@freecodecamp.org'
# pieces = words.split()
# counts = { 'quincy' : 1 , 'mrugesh' : 42, 'beau': 100, '0': 10}
# print(counts.get('kris', 0)+1)
# print(counts)

def isAnagram(s:str, t:str) -> bool:
  if len(s) != len(t): return False
  countS, countT = {}, {}
  for i in range(len(s)):
    countS[s[i]] = countS.get(s[i],0) + 1
    countT[t[i]] = countT.get(t[i],0) + 1
  for key in countT:
    if countT[key] != countS.get(key,0): 
      return False
  return True
  
print(isAnagram("racecar","carrace"))

class Solution:
  def twoSum(self, nums: List[int], target: int) -> List[int]:
    hashmap = {}
    for i,n in enumerate(nums):
      pass