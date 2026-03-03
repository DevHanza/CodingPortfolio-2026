class Node {
  constructor(value, next = null) {
    this.value = value;
    this.next = next;
  }
}

class LinkedList {
  constructor() {
    this.head = null;
    this.size = 0;
  }

  push(value) {
    let newNode = new Node(value);

    if (!this.head) {
      this.head = newNode;
      this.size++;
      return newNode;
    }

    let current = this.head;

    while (current.next) {
      current = current.next;
    }

    current.next = newNode;
    this.size++;
    return newNode;
  }

  // reverse() {
  //   let prev = null;
  //   let current = this.head;
  //   let next;

  //   while (current) {
  //     next = current.next;
  //     current.next = prev;
  //     prev = current;
  //     current = next;
  //   }

  //   this.head = prev;

  //   return prev;
  // }

  reverse() {
    let prev = null;
    let current = this.head;
    let next;

    while (current) {
      next = current.next;
      current.next = prev;
      prev = current;
      current = next;
    }

    this.head = prev;
    return prev;
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

const ll = new LinkedList();
ll.push(1);
ll.push(2);
ll.push(3);
ll.push(4);
ll.push(5);
ll.printAll();

ll.reverse();
ll.printAll();
