class Node {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

class Queue {
  constructor() {
    this.head = null;
    this.tail = null;
    this.length = 0;
  }

  enqueue(value) {
    const newNode = new Node(value);

    if (!this.head) {
      this.head = this.tail = newNode;
      return newNode;
    }

    this.tail.next = newNode;
    this.tail = newNode;
    this.length++;

    return newNode;
  }

  dequeue() {
    if (!this.head) {
      return null;
    }

    const removedNode = this.head;
    this.head = this.head.next;
    removedNode.next = null;

    this.length--;
    return removedNode;
  }

  min() {
    let current = this.head;
    let min = current.value;

    while (current.next) {
      current = current.next;

      if (current.value < min) {
        min = current.value;
      }
    }

    console.log("min: ", min);
    return min;
  }

  print() {
    const arr = [];

    let current = this.head;

    while (current) {
      arr.push(current.value);
      current = current.next;
    }

    console.log(arr);
  }
}

const myQueue = new Queue();

myQueue.enqueue(1);
myQueue.enqueue(2);
myQueue.enqueue(3);
myQueue.dequeue();

myQueue.min();

myQueue.print();
