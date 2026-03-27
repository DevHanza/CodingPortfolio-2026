// Tree Traversal ( Breath First Search )
import printTree from "./../print-tree.js";

class Node {
  constructor(value) {
    this.left = null;
    this.right = null;
    this.value = value;
  }
}

class BinarySearchTree {
  constructor() {
    this.root = null;
  }

  insert(value) {
    const newNode = new Node(value);

    if (this.root === null) {
      this.root = newNode;
      return this;
    }

    let temp = this.root;

    while (true) {
      if (newNode.value === temp.value) return undefined;

      if (newNode.value < temp.value) {
        //

        if (temp.left === null) {
          temp.left = newNode;
          return this;
        }

        temp = temp.left;

        //
      } else {
        //

        if (temp.right === null) {
          temp.right = newNode;
          return this;
        }

        temp = temp.right;

        //
      }
    }
  }

  BFS() {
    let queue = [];
    let results = [];
    let current = this.root;

    queue.push(current);

    while (queue.length > 0) {
      current = queue.shift();
      results.push(current.value);

      if (current.left) {
        queue.push(current.left);
      }

      if (current.right) {
        queue.push(current.right);
      }
    }
    return results;
  }
}

const mytree = new BinarySearchTree();
mytree.insert(10);
mytree.insert(5);
mytree.insert(15);
mytree.insert(3);
mytree.insert(7);
mytree.insert(12);
mytree.insert(18);

// printTree(mytree.root);

console.log(mytree.BFS());
