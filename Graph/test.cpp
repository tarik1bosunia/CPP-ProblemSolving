#include<iostream>
#include<vector>

using namespace std;

#define V 4

// Add edge
void addEdge(vector<int> adj[], int s, int d) {
  adj[s].push_back(d);
  adj[d].push_back(s);
}

void printGraph(vector<int> adj[]) {
  for (int d = 0; d < V; ++d) {
    cout << "\n Vertex "
       << d << ":";
    for (int x : adj[d])
      cout << "-> " << x;
    printf("\n");
  }
}

int main(){
     
   vector<int> adj[V];  

   addEdge(adj, 0, 1);
   addEdge(adj, 0, 2);
   addEdge(adj, 0, 3);
   addEdge(adj, 1, 2);
    
    return 0;
}

