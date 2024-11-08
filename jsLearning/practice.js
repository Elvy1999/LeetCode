function repeatString(word, count) {
  let result = "";
  for (let i = 0; i < count; i++) {
    result += word;
  }
  return result;
}

console.log(repeatString("job", 6));

reverseString = (word) => {
  let reversed = word.split("").reverse().join("");
  return reversed;
};

removeFromArray = (array, num) => {
  return array.filter((item) => item != num);
};

sumAll = (num1, num2) => {
  let total = 0;
  for (let i = num1; i <= num2; i++) {
    total += i;
  }
  return total;
};

const leapYears = (year) => year % 400 === 0 || (year % 100 !== 0 && year % 4 === 0);

console.log(reverseString("Hello"));
console.log(removeFromArray([1, 2, 3, 4], 3));
console.log(sumAll(1, 4));
console.log(leapYears(2000));
console.log(leapYears(1985));
