// Doubly Linked Lists with only head

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
    this.size = 0;
  }

  // Add item to the end
  push(value) {
    const newNode = new Node(value);

    if (!this.head) {
      this.head = newNode;
      this.size++;
      return newNode;
    }

    let current = this.head;

    while (current.next) {
      current = current.next;
    }

    newNode.prev = current;
    current.next = newNode;
    this.size++;

    return newNode;
  }

  // Remove the last item
  pop() {
    if (!this.head || this.size === 0) {
      return;
    }

    if (this.size === 1) {
      this.head = null;
      this.size--;
      return;
    }

    let current = this.head;

    while (current.next) {
      current = current.next;
    }

    current.prev.next = null;
    current.prev = null;
    this.size--;
    return current;
  }

  // Add item to the start
  unshift(value) {
    const newNode = new Node(value);

    if (!this.head || this.size === 0) {
      this.head = newNode;
      this.size++;
      return newNode;
    }

    newNode.next = this.head;
    this.head.prev = newNode;
    this.head = newNode;
    this.size++;
    return newNode;
  }

  // Remove the first item
  shift() {
    if (!this.head || this.size === 0) return;

    let temp = this.head;

    if (this.size === 1) {
      this.head = null;
      this.size--;
      return temp;
    }

    this.head = this.head.next;
    this.head.prev = null;
    temp.next = null;
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
// myDoublyLinkedList.unshift(0);
// myDoublyLinkedList.shift();
myDoublyLinkedList.printAll();
