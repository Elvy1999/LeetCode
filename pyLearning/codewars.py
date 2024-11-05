import math

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
  

number = int(input("Enter a number:"))
divisors = []
for i in range(1,number+1):
  if number%i == 0:
    divisors.append(i)
print(divisors)

  