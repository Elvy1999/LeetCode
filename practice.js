let nums = [1, 2, 4, 3, 1];
function hasDuplicate(nums) {
  let seen = new Set();
  for (let i = 0; i < nums.length; i++) {
    if (seen.has(nums[i])) return true;
    else seen.add(nums[i]);
  }
  return false;
}
console.log(hasDuplicate(nums));

var mergeAlternately = function (word1, word2) {
  let finalWord = "";
  let MaxLength = Math.max(word1.length, word2.length);

  for (let i = 0; i < MaxLength; i++) {
    if (i < word1.length) finalWord += word1[i];
    if (i < word2.length) finalWord += word2[i];
  }
  return finalWord;
};

var gcdOfStrings = function (str1, str2) {
  let finalWord = ""; // not correct solution comeback and revise
  for (let i = 0; i < str1.length; i++) {
    if (i < Math.str1.length / str2.length && str1[i] == str2[i]) {
      finalWord += str2[i];
    }
  }
  return finalWord;
};

var twoSum = function (nums, target) {
  let solution = new Map(); // Store value and its index

  for (let i = 0; i < nums.length; i++) {
    let complement = target - nums[i]; // The number we need to complete the sum

    if (solution.has(complement)) {
      return [solution.get(complement), i]; // Return the indices if complement is found
    }

    solution.set(nums[i], i); // Store the current number and its index
  }

  return []; // Return empty array if no solution is found
};
