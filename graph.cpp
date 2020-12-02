#include "graph.h"
#include <queue>

using namespace std;

Graph::Graph(int n) {
  adjList.resize(n);
}

void Graph::setNumberOfVertices(int n) {
  adjList.resize(n);
}

int Graph::getNumberOfVertices() const { return adjList.size(); }

void Graph::addEdge(int u, int v) {
  adjList[u].push_back(v);
}

bool Graph::isNeighboor(int u, int v) const {
  for (auto e: adjList[u]) {
      if (e == v) return true;
  }
  return false;
}


void Graph::BFS(int u) const {
    // vector to keep track of the visited nodes
    vector<bool> visited(adjList.size(), false);

    // the q to keep track of the order of visiting the nodes
    queue<int> q;

    // lets push the origin node and mark as visited
    q.push(u);
    visited[u] = true;
    cout << u << endl;

    while (!q.empty()) {
        int v = q.front(); q.pop();

        // lets push all the non-visited neighbors of v onto
        // the queue and mark them as visited
        for (auto e: adjList[v]) {
            if (!visited[e]) {
                visited[e] = true;
                cout << e << endl;
                q.push(e);
            }
        }
    }
}


