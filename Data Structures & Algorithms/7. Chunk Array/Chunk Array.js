// ::::::::::::::::::::::
// :: Method 1
// ::::::::::::::::::::::

function chunkArray(arr, size) {
  const chunked = [];
  let index = 0;

  while (index < arr.length) {
    const chunk = arr.slice(index, index + size);

    chunked.push(chunk);
    index += size;
  }

  return chunked;
}

console.log(chunkArray([1, 2, 3, 4, 5], 2));
