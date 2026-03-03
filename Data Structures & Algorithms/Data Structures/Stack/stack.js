class Node {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

class Stack {
  constructor() {
    this.top = null;
    this.length = 0;
  }

  push(value) {
    const newNode = new Node(value);

    newNode.next = this.top;
    this.top = newNode;

    this.length++;
    return newNode;
  }

  pop() {
    if (!this.top || this.length === 0) {
      return null;
    }

    const removedNode = this.top;
    this.top = this.top.next;
    this.length--;

    removedNode.next = null;
    return removedNode;

    // -- A another way --

    // let next = this.top.next;
    // this.top.next = null;
    // this.top = next;
    // this.length--;
  }

  print() {
    let arr = [];

    let current = this.top;

    while (current) {
      arr.push(current.value);
      current = current.next;
    }

    console.log(arr);
  }
}

const myStack = new Stack();
myStack.push(1);
myStack.push(2);
myStack.push(3);
myStack.push(3);
myStack.push(3);

myStack.pop();
myStack.pop();

myStack.print();
