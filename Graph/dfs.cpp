// Adjascency List representation in C++

#include <bits/stdc++.h>
using namespace std;

  // Create a graph
  #define V 4

  vector<int> adj[V];
  int vis[V];

// Add edge
void addEdge(int s, int d) {
  adj[s].push_back(d);
  adj[d].push_back(s);
}


// 0 => 1 2 3
// 1 => 0 2
// 2 => 0 1
// 3 => 0

// vis[] = 1 1 1 1
// print  0 1 2 3
void printDfs(int root_index){
    vis[root_index] = 1; 
    cout << root_index << "->";

    for(auto child : adj[root_index]){
          
          if(!vis[child]){
            printDfs(child);
          }
        
    }
}


int main() {
  // Add edges
  addEdge(0, 1);
  addEdge(0, 2);
  addEdge(0, 3);
  addEdge(1, 2);

  
  printDfs(0);


  
}