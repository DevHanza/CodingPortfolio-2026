function bubbleSort(arr) {
  for (let i = 0; i < arr.length - 1; i++) {
    //
    for (let j = 0; j < arr.length - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        // Swap Method #2
        [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
      }
    }
    //
  }

  return arr;
}

console.log(bubbleSort([2, 5, 4, 1, 3]));
console.log(bubbleSort([2, 4, 5, 7, 1, 5]));
console.log(bubbleSort([10, 3, 5, 6, 8, 1, 2]));
