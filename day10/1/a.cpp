#include<iostream>
   
   
using namespace std;

struct Node
{
    int data;
    Node *next = NULL;
};

class LinkedList{
  
    

public:
    Node* head = NULL;
   Node* createNode(int data) {

       Node* new_node = new Node();
       if(head == NULL){
           head = new_node;
       }
   }


};

    
int main(){
   
  
    //initialize linked list
    LinkedList* list = new LinkedList();

    //initialize node
    Node* temp;
    Node* one =   list->createNode(1);
    Node* two = list->createNode(2);
    Node* three = list->createNode(3);

    one->next = two;
    two->next = three;

    temp = list->head;

    while(temp != NULL){
       cout << temp->data << " ";
       temp = temp->next;
   }




   
    


   
    return 0;
}


    // dynamic memory allocation
//    one = new Node();
//    two = new Node();
//    three = new Node();

//     // data initialization
//    one->data = 1;
//    two->data = 2;
//    three->data = 3;

//    // link
//    one->next = two;
//    two->next = three;
//    three->next = NULL;

//    temp = one;

//    while(temp != NULL){
//        cout << temp->data << " ";
//        temp = temp->next;
//    }