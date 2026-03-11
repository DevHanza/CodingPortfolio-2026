function wordCounter(text) {
  const wordMap = {};

  const lowerText = text.toLowerCase();
  const words = lowerText.split(/\s+/);

  for (const word of words) {
    if (word in wordMap) {
      wordMap[word]++;
    } else {
      wordMap[word] = 1;
    }
  }

  return wordMap;
}

console.log(wordCounter("Lorem ipsum dolor sit amet."));
console.log(wordCounter("Hello!"));
