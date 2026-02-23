//
// ::::::::::::::::::::::
// :: Method 1
// ::::::::::::::::::::::
//

function reverseString(s) {
  return s.split("").reverse().join("");
}

//
// ::::::::::::::::::::::
// :: Method 2
// ::::::::::::::::::::::
//

function reverseString(s) {
  //
  let reversedString = "";

  for (let i = s.length - 1; i >= 0; i--) {
    reversedString += s[i];
  }

  return reversedString;
  //
}

// console.log(reverseString("Hello!"));
// console.log(reverseString("12345"));

//
// ::::::::::::::::::::::
// :: Method 3
// ::::::::::::::::::::::
//

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

// let s = ["H", "e", "l", "l", "o"];
// console.log(reverseString(s));
