// Method 1

function reverseString(s) {
  return s.split("").reverse().join("");
}

// Method 2

function reverseString(s) {
  //
  let reversedString = "";

  for (let i = s.length - 1; i >= 0; i--) {
    reversedString += s[i];
  }

  return reversedString;
  //
}

console.log(reverseString("Hello!"));
console.log(reverseString("12345"));
