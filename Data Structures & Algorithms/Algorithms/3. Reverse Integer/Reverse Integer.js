//
// ::::::::::::::::::::::
// :: Method 1
// ::::::::::::::::::::::
//

function reverseInt(num) {
  const reversed = num.toString().split("").reverse().join("");
  const reversedInt = parseInt(reversed) * Math.sign(num);
  return reversedInt;
}

console.log(reverseInt("123"));
console.log(reverseInt("-456"));
