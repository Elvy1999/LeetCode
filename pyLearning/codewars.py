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
  
def lessThan5(list):
  container = []
  lessNumber = int(input("Give me a number that you want me to print under:"))
  for i in list:
    if i < lessNumber:
      container.append(i);
  print(container)

lessThan5([1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89])
  