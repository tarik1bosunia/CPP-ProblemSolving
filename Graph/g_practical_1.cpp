#include<iostream>
#include<vector>

using namespace std;

bool** adjMatrix;
int numVertices;

void taking_input(){
    cin >> numVertices;
    adjMatrix = new bool* [numVertices]; // 4 byte * numVertices
    for (int i = 0; i < numVertices; i++) {
      adjMatrix[i] = new bool[numVertices];
      for (int j = 0; j < numVertices; j++)
       cin >> adjMatrix[i][j];
    }
}
void ans_a(){
    for (int i = 0; i < numVertices; i++) {
      cout << "adjacent of " << i << " : ";
      for (int j = 0; j < numVertices; j++){
         if(adjMatrix[i][j] == true){
            cout << j << " ";
         }
      }
      cout << endl;
       
    }
}


int main(){
    taking_input();
    ans_a();

    
    return 0;
}

