//
// ::::::::::::::::::::::
// :: Method 1
// ::::::::::::::::::::::
//

function capitalize(str) {
  return str
    .toLowerCase()
    .split(" ")
    .map((word) => word[0].toUpperCase() + word.slice(1))
    .join(" ");
}

console.log(capitalize("Hello World"));
console.log(capitalize("Jhon Doe"));
