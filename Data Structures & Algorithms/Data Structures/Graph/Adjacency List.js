class Graph {
  constructor() {
    this.list = {};
  }

  addVertex(vertex) {
    if (!this.list[vertex]) {
      this.list[vertex] = [];
    }
  }

  addEdge(vertex1, vertex2) {
    this.list[vertex1].push(vertex2);
    this.list[vertex2].push(vertex1);
  }

  print() {
    console.log("Adjacency List:");
    for (let vertex in this.list) {
      console.log(vertex + " -> " + this.list[vertex].join(", "));
    }

    console.log("\n", this.list);
  }
}

const g = new Graph();

g.addVertex("A");
g.addVertex("B");
g.addVertex("C");
g.addVertex("D");

g.addEdge("A", "B");
g.addEdge("A", "C");
g.addEdge("B", "D");
g.addEdge("C", "D");

g.print();
