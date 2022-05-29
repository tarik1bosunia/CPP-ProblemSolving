#include <iostream>

using namespace std;

struct Node{
    int data;
    int* next;
};

class LinkedList{
    Node* head = NULL;
public:
        
   void create_node(){
       if(this.head == NULL){
           cout << "empty" << endl;
       }
   }    
};

LinkedList linkedList = new LinkedList();