
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


class Node:
  def __init__(self,key,value):
    self.key = key
    self.value = value
    self.next = None
    

class myHashMap:
  def __init__(self):
    self.buckets = [None] * 10_000
    
  def hashFunction(self,key):
    return key % len(self.buckets)

  def put(self, key, value):
    bucketIndex = self.hashFunction(key)
    if self.buckets[bucketIndex] == None:
      self.buckets[bucketIndex] = Node(key,value)
      return
    temp = self.buckets[bucketIndex]
    while temp is not None:
      if temp.key == key:
        temp.value = value
        return
      elif temp.next == None:
        temp.next = Node(key,value)
        return
      temp = temp.next

  def get(self,key):
    bucketIndex = self.hashFunction(key)
    temp = self.buckets[bucketIndex]
    while temp is not None:
      if temp.key == key:
        return temp.value
      temp = temp.next 
    return -1
  
  def remove(self,key):
    bucketIndex = self.hashFunction(key)
    temp = self.buckets[bucketIndex]
    if temp == None: return
    if temp.key == key:
      if temp.next is not None:
        self.buckets[bucketIndex] = temp.next
      else: 
        self.buckets[bucketIndex] = None
      return
    previous = temp
    temp = temp.next
    while temp is not None:
      if temp.key == key:
        previous.next = temp.next
        return 
      previous = temp
      temp = temp.next
  

def sortArray(nums):
    for i in range(len(nums)-1):
      for j in range(i+1,len(nums)):
        if nums[i] > nums[j]:
          temp = nums[i]
          nums[i] = nums[j]
          nums[j] = temp
    return nums
  
nums = [2,7,9,1,3,5]
nums = sortArray(nums)
print(nums)

def sortColors(nums):
  low = 0
  mid = int(len(nums)/2)
  high = len(nums)-1
  for i in range(len(nums)):
    if nums[i] == 0:
      if nums[low] != 0:
        swap(nums,low,i)
        low+=1
    elif nums[i] == 1:
      if nums[mid] != 1:
        swap(nums,mid,i)
        mid+=1
    elif nums[i] == 2:
      if nums[high] != 2 and high != mid:
        swap(nums,high,i)
        high -= 1
    

def swap(nums,a,b):
  temp = nums[a]
  nums[a] = nums[b]
  nums[b] = temp

nums = [1,0,1,2]
sortColors(nums)
print(nums)