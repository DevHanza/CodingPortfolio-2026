var reverseString = function (s) {
  let first = 0;
  let last = s.length - 1;
  let temp;

  // !first === last
  while (first < last) {
    temp = s[first];
    s[first] = s[last];
    s[last] = temp;
    first++;
    last--;
  }
  return s;
};

let s = ["H", "e", "l", "l", "o"];
console.log(reverseString(s));
