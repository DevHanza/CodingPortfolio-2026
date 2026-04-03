class Graph {
  constructor(vertices) {
    this.vertices = vertices;
    this.matrix = Array.from({ length: vertices }, () =>
      Array(vertices).fill(0),
    );
  }

  addEdge(x, y) {
    this.matrix[x][y] = 1;
    this.matrix[y][x] = 1;
  }

  print() {
    console.log("Adjacency Matrix:");
    this.matrix.forEach((row) => console.log(row.join(" ")));
    
    console.log("\n", this.matrix);
  }
}

const g = new Graph(4);
g.addEdge(0, 1);
g.addEdge(0, 2);
g.addEdge(1, 3);
g.addEdge(2, 3);

g.print();
