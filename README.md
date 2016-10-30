# dijkstra
Dijkstra's shortest path using C++ Armadillo

Here's my first try at writing Dijkstra's shortest path algorithm in C++ using the Armadillo linear algebra library (http://arma.sourceforge.net/). (It's pretty ugly, but I was going for a low number of lines..)

Example "test.dat" adjacency matrix
```
0 4 3 0 7 0 0
4 0 6 5 0 0 0
3 6 0 11 8 0 0 
0 5 11 0 2 2 10
7 0 8 2 0 0 5
0 0 0 2 0 0 3
0 0 0 10 5 3 0
```
The graph looks like this:
![hello](https://cloud.githubusercontent.com/assets/14184514/10557100/eb12bffe-746a-11e5-8bb9-cc4fa3ec05bf.png)

Running the small program should give this output (the shortest paths from vertex A (aka, vertex "0"): 
```
shortest path to vertex 2: 3
shortest path to vertex 1: 4
shortest path to vertex 4: 7
shortest path to vertex 3: 9
shortest path to vertex 5: 11
shortest path to vertex 6: 12
```
Vertex A=0, B=1, C=2, etc.
