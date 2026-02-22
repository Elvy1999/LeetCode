
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
  

def twoSum(nums,target):
  numsMap = {}
  for i in range(len(nums)):
    index = target - nums[i]
    if nums[i] in numsMap:
      return [numsMap[nums[i]],i]
    else:
      numsMap[index] = i

print(twoSum([4,5,6],10)) 

def longestCommonPrefix(strs):
  prefixMap = {}
  for word in strs:
    letters = ""
    for letter in word:
      letters += letter
      if letters in prefixMap:
        prefixMap[letters] += 1
      else:
        prefixMap[letters] = 1
  prefixMap = sorted(prefixMap.items(), key = lambda item: (item[1],item[0]), reverse = True)
  print(prefixMap)
  possiblePrefix = prefixMap[0]
  answer = possiblePrefix[0] if possiblePrefix[1] > 1 else '""'
  print(answer)

def longestCommonPrefix2(strs):
  prefix = strs[0]
  for i in range(len(strs)):
    j = 0
    word = strs[i]
    while j < min(len(word), len(prefix)):
      if word[j] != prefix[j]:
        break
      j += 1
    prefix = prefix[:j]
  print(prefix)
  return prefix


def groupAnagrams(strs):
  map = {}
  for word in strs:
    key = "".join(sorted(word))
    if key in map:
      map[key].append(word)
    else:
      map[key] = [word]
  return list(map.values())
  

def removeElement(nums,val):
  nums[:] = [num for num in nums if num != val]
  k = len(nums)
  return k
  


def majorityElement(nums):
  map = {}
  majorityElem = nums[0]
  for num in nums:
    map[num] = map.get(num, 0) + 1
    if map[num] > map[majorityElem]:
      majorityElem = num
  print(majorityElem)
  return majorityElem


