
// class Node{
//     int data;

// public:
    
//     Node(int data){
//       this->data = data;
//     }
// };


// Node* new_node = new Node(10);

#include <iostream>

using namespace std;


struct Node
{
    int data;
    Node* next;
    
    Node(int data): data{data},next{nullptr}{}

};

class LinkedList{
public:
  Node* head;

  LinkedList(Node* head){
    this->head = head;
  }
  Node* insertAtBeginning(Node** head, int data){
      Node* new_node = new Node(data);

      if(*head == NULL){
          *head = new_node;
          
      }else{
          new_node->next = *head;
          *head = new_node;
      }

      return *head;
  }

  Node* insertAtEnd(Node** head , int data){
      Node* new_node = new Node(data);

      if(*head == NULL){

        *head = new_node;
          return *head;
      }



      Node* temp = *head;

      while(temp->next != NULL){

          temp = temp->next;
      }

      temp->next = new_node;

      return *head;
  }

  Node* insertAfter(Node** head, int data, int key){

    Node* new_node = new Node(data);

    if(*head == NULL){
       *head = new_node;
       return *head;
    }


    Node* temp = *head;

    while(temp->data != key && temp->next != NULL){
        temp = temp->next;
    }

    if(temp->next == NULL){

        cout << "Can't Insert " << key << " not found!!!" << endl; 
        return *head;
    }

    new_node->next = temp->next;

    temp->next = new_node;

    return *head;
  }

  Node* deleteAfter(Node** head, int key){
      Node* temp1 = *head;
      Node* temp2 = *head;
      
      while(temp1->data != key && temp1->next != NULL){
          temp1 = temp1->next;
      }
  }

  void printList(Node** head){
    Node* temp = *head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
  }

};

int main()
{
    Node* head = NULL;
    LinkedList* list = new LinkedList(head);

    head = list->insertAtBeginning(&head, 100);
    head = list->insertAtBeginning(&head, 10);


    head = list->insertAtEnd(&head, 150);

   
    // 5 , 10 , 100 , 150
    // 5 , 10 , 500, 100 , 150

    head = list->insertAfter(&head, 500, 10);

    head = list->deleteAfter(&head , 100);


    list->printList(&head);
  
}





