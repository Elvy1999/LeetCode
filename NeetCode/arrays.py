
def hasDuplicate(nums):
  seen = set()
  for num in nums:
    if num in seen:
      return True
    else:
      seen.add(num)
  return False

def isAnagram(s,t):
  if(len(s) != len(t)): return False
  sMap = {}
  for char in s:
    sMap[char] = sMap.get(char,0) + 1
  for char in t:
    if char not in sMap:
      return False
    sMap[char] = sMap[char] - 1
    if sMap[char] < 0:
      return False
  return True
  

