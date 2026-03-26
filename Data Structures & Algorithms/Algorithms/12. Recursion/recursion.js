// Recursion

// Ex 1: Count Down

function countDown(num) {
  // Base case
  if (num === 0) {
    console.log("You've reached the end.");
    return;
  }

  console.log(num);

  countDown(num - 1);
}

// countDown(10);

// Ex: 2:

function factorial(num) {
  //   base case
  if (num === 0) {
    return 1;
  }

  return num * factorial(num - 1);
}
console.log(factorial(4));
