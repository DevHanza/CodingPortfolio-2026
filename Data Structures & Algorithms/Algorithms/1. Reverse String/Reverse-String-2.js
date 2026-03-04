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
