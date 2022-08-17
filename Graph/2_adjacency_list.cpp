// Adjascency List representation in C++

#include <bits/stdc++.h>
using namespace std;

// Add edge
void addEdge(vector<int> adj[], int s, int d) {
  adj[s].push_back(d);
  adj[d].push_back(s);
}
// 0 => 1 2 3
// 1 => 0 2
// 2 => 0 1
// 3 => 0

// Print the graph
void printGraph(vector<int> adj[], int V) {
  for (int list = 0; list < V; ++list) {
    cout << "\n Vertex " << list << ":";

    for (auto x : adj[list])
      cout << "-> " << x;
    printf("\n");
  }
}

int main() {
  int V = 4;

  // Create a graph
  vector<int> adj[V];

  // Add edges
  addEdge(adj, 0, 1);
  addEdge(adj, 0, 2);
  addEdge(adj, 0, 3);
  addEdge(adj, 1, 2);
  printGraph(adj, V);
  
}