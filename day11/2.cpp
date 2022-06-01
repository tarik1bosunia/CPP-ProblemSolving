#include <iostream>
#include <cmath>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int data) : data{data}, next{nullptr} {}
};

class LinkedList
{
public:
    Node* head;
      LinkedList(Node* head){
        this->head = head;
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

    // Print the linked list
 void printList(Node** head){
    Node* temp = *head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
  }
};

void max_value(Node** head){
    if(*head == NULL){
        cout << "The list is empty." << endl;
    }
    // finding maximum value from linked list
    int max = (*head)->data;


    Node* temp = *head;
    
    while(temp != NULL){
        if(temp->data > max){
            max = temp->data;
        }

        temp = temp->next;
    }
    cout << "max: " << max << endl;
}

void sin_value(Node** head){
        if(*head == NULL){
        cout << "The list is empty." << endl;
    }
 


    Node* temp = *head;
    cout << "sine values: ";
    
    while(temp != NULL){
        
        cout << sin(temp->data) << " ";
        temp = temp->next;
       
    }
    cout << endl;
}

int main()
{

    Node *head = NULL;
    LinkedList *list = new LinkedList(head);

    head = list->insertAtEnd(&head, 5);
    head = list->insertAtEnd(&head, 3);
    head = list->insertAtEnd(&head, 9);
    head = list->insertAtEnd(&head, 42);
    head = list->insertAtEnd(&head, 0);
    head = list->insertAtEnd(&head, 10);


    list->printList(&head);
    max_value(&head);
    sin_value(&head);

    return 0;
}