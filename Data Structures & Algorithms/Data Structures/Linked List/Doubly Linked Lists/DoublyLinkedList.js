// Doubly Linked Lists with head + tail

class Node {
  constructor(value) {
    this.value = value;
    this.prev = null;
    this.next = null;
  }
}

class DoublyLinkedList {
  constructor() {
    this.head = null;
    this.tail = null;
    this.size = 0;
  }
  // Add item to the end
  push(value) {
    const newNode = new Node(value);

    if (!this.head) {
      this.head = newNode;
      this.tail = newNode;
      this.size++;
      return newNode;
    }

    this.tail.next = newNode;
    newNode.prev = this.tail;
    this.tail = newNode;
    this.size++;
    return newNode;
  }

  // Remove the last item
  pop() {
    const temp = this.tail;

    if (!this.head || this.size === 0) {
      return;
    }

    if (this.size === 1) {
      this.head = null;
      this.tail = null;
      return temp;
    }

    this.tail = this.tail.prev;
    this.tail.next = null;
    temp.prev = null;

    this.size--;
    return temp;
  }

  // Add item to the start
  unshift(value) {
    const newNode = new Node(value);

    if (!this.head || this.size === 0) {
      this.head = newNode;
      this.tail = newNode;
      this.size++;
      return newNode;
    }

    this.head.prev = newNode;
    newNode.next = this.head;
    this.head = newNode;
    this.size++;
    return newNode;
  }

  // Remove the first item
  shift() {
    if (!this.head || this.size === 0) {
      return;
    }

    let temp = this.head;

    if (this.size === 1) {
      this.head = null;
      this.tail = null;
      this.size--;
      return temp;
    }

    this.head = this.head.next;
    temp.next = null;
    this.head.prev = null;

    this.size--;
    return temp;
  }

  // print linked list
  printAll() {
    const arr = [];
    let current = this.head;

    while (current) {
      arr.push(current.value);
      current = current.next;
    }
    console.log(arr);
  }
}

const myDoublyLinkedList = new DoublyLinkedList();

myDoublyLinkedList.push(1);
myDoublyLinkedList.push(2);
myDoublyLinkedList.push(3);
// myDoublyLinkedList.pop();
// myDoublyLinkedList.unshift(4);
// myDoublyLinkedList.shift();
myDoublyLinkedList.printAll();
