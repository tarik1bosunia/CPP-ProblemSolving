#include <iostream>

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

    return 0;
}