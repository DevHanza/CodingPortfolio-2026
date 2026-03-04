function reverseString(s) {
  const stack = [];
  let reverseString = "";

  for (let x of s) {
    stack.push(x);
  }

  while (stack.length > 0) {
    reverseString += stack.pop();
  }

  return reverseString;
}

console.log(reverseString("Hello!"));
