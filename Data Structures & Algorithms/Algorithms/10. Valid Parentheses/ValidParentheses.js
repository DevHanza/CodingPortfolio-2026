//
// ::::::::::::::::::::::
// :: Method 1
// ::::::::::::::::::::::
//

// Imagine a stack of plates:

// When you see an opening bracket, put it on the stack.

// When you see a closing bracket, check the top plate:

// - If it matches → remove it.
// - If it doesn’t → invalid.

// At the end:

// - If the stack is empty → valid.
// - If not → invalid.

//
// https://youtu.be/WTzjTskDFMg
// https://chatgpt.com/share/69a7b903-3e14-8004-a6e0-fad699832b74
//

const brackets = {
  "(": ")",
  "[": "]",
  "{": "}",
};

function isValid(string) {
  const stack = [];
  for (const char of string) {
    if (brackets[char]) {
      stack.push(char);
    } else {
      const last = stack.pop();

      if (brackets[last] !== char) {
        return false;
      } 
    }
  }

  return stack.length === 0;
}

console.log(isValid("()"));
console.log(isValid("(]"));
console.log(isValid("([])"));
console.log(isValid("([)]"));
console.log(isValid("()[]{}"));
