#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>

using namespace std;

class Graph {
private:
  vector < vector < int > > adjList;
public:
  Graph(int n = 0);
  void setNumberOfVertices(int n);
  int getNumberOfVertices() const;
  void addEdge(int u, int v);
  bool isNeighboor(int u, int v) const;
  void BFS(int u) const;
  vector<int> distance(int u) const;
  string toString();
};

#endif

