// Method 1

function isPalindrome(s) {
  return s === s.split("").reverse().join("");
}

// Method 2

function isPalindrome(s) {
  let reversedString = "";

  for (let i = s.length - 1; i >= 0; i--) {
    reversedString += s[i];
  }

  return reversedString === s;
}

console.log(isPalindrome("racecar"));
console.log(isPalindrome("12345"));
