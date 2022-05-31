
// Linked list operations in C++

#include <stdlib.h>

#include <iostream>
using namespace std;

// Create a node
struct Node
{
    int data;
    Node* next;

    Node(int data): data{data},next{nullptr}{}
};

void insertAtBeginning(struct Node **head_ref, int new_data)
{
  // Allocate memory to a node
  Node *new_node = new Node(new_data);

  // insert the data
  new_node->data = new_data;
  new_node->next = *head_ref;

  // Move head to new node
  *head_ref = new_node;
}

// Insert a node after a node
void insertAfter(struct Node *prev_node, int new_data)
{
  if (prev_node == NULL)
  {
    cout << "the given previous node cannot be NULL";
    return;
  }

  Node *new_node = new Node(new_data);
  new_node->data = new_data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
}

// Insert at the end
void insertAtEnd(Node **head_ref, int new_data)
{
  Node *new_node = new Node(new_data);
  Node *last = *head_ref; /* used in step 5*/

  new_node->data = new_data;
  new_node->next = NULL;

  if (*head_ref == NULL)
  {
    *head_ref = new_node;
    return;
  }

  while (last->next != NULL)
    last = last->next;

  last->next = new_node;
  return;
}

// Delete a node
void deleteNode(struct Node **head_ref, int key)
{
  struct Node *temp = *head_ref, *prev;

  if (temp != NULL && temp->data == key)
  {
    *head_ref = temp->next;
    free(temp);
    return;
  }
  // Find the key to be deleted
  while (temp != NULL && temp->data != key)
  {
    prev = temp;
    temp = temp->next;
  }

  // If the key is not present
  if (temp == NULL)
    return;

  // Remove the node
  prev->next = temp->next;

  free(temp);
}

// Search a node
bool searchNode(struct Node **head_ref, int key)
{
  struct Node *current = *head_ref;

  while (current != NULL)
  {
    if (current->data == key)
      return true;
    current = current->next;
  }
  return false;
}

// Sort the linked list
void sortLinkedList(struct Node **head_ref)
{
  struct Node *current = *head_ref, *index = NULL;
  int temp;

  if (head_ref == NULL)
  {
    return;
  }
  else
  {
    while (current != NULL)
    {
      // index points to the node next to current
      index = current->next;

      while (index != NULL)
      {
        if (current->data > index->data)
        {
          temp = current->data;
          current->data = index->data;
          index->data = temp;
        }
        index = index->next;
      }
      current = current->next;
    }
  }
}

// Print the linked list
void printList(struct Node *node)
{
  while (node != NULL)
  {
    cout << node->data << " ";
    node = node->next;
  }
}

// Driver program
int main()
{
  struct Node *head = NULL;

  insertAtEnd(&head, 1);
  insertAtBeginning(&head, 2);
  insertAtBeginning(&head, 3);
  insertAtEnd(&head, 4);
  insertAfter(head->next, 5);

  cout << "Linked list: ";
  printList(head);

  cout << "\nAfter deleting an element: ";
  deleteNode(&head, 3);
  printList(head);

  int item_to_find = 3;
  if (searchNode(&head, item_to_find))
  {
    cout << endl
         << item_to_find << " is found";
  }
  else
  {
    cout << endl
         << item_to_find << " is not found";
  }

  sortLinkedList(&head);
  cout << "\nSorted List: ";
  printList(head);
}

// class Node{
//     int data;

// public:

//     Node(int data){
//       this->data = data;
//     }
// };

// Node* new_node = new Node(10);

// #include <iostream>

// using namespace std;

// struct Node
// {
//     int data;
//     Node* next;

//     Node(int data): data{data},next{nullptr}{}

// };

// class LinkedList{
// public:
//   Node* head;

//   LinkedList(Node* head){
//     this->head = head;
//   }
//   Node* insertAtBeginning(Node** head, int data){
//       Node* new_node = new Node(data);

//       if(*head == NULL){
//           *head = new_node;

//       }else{
//           new_node->next = *head;
//           *head = new_node;
//       }

//       return *head;
//   }

//   Node* insertAtEnd(Node** head , int data){
//       Node* new_node = new Node(data);

//       if(*head == NULL){

//         *head = new_node;
//           return *head;
//       }

//       Node* temp = *head;

//       while(temp->next != NULL){

//           temp = temp->next;
//       }

//       temp->next = new_node;

//       return *head;
//   }

//   Node* insertAfter(Node** head, int data, int key){

//     Node* new_node = new Node(data);

//     if(*head == NULL){
//        *head = new_node;
//        return *head;
//     }

//     Node* temp = *head;

//     while(temp->data != key && temp->next != NULL){
//         temp = temp->next;
//     }

//     if(temp->next == NULL){

//         cout << "Can't Insert " << key << " not found!!!" << endl;
//         return *head;
//     }

//     new_node->next = temp->next;

//     temp->next = new_node;

//     return *head;
//   }

// Node* deleteNode(Node** head, int key){
//   // if list is empty
//     if(*head == NULL){
//         return *head;
//     }
//      Node* temp = *head;
//      Node* pre = *head;

//     // delete head node
//     if(temp->data  == key){
//         *head = temp->next;
//         cout << "head node deleted" << endl;
//         delete temp;
//         return *head;
//     }

//       while(temp->data != key && temp->next == NULL){
//           pre = temp;
//           temp = temp->next;
//       }

//       if (temp == NULL){
//             cout << "Can not delete , not found the key: " << key << endl;
//             return *head;
//       }
//        if(temp->next == NULL){
//          cout << "last node deleted" << endl;
//          pre->next = NULL;
//          delete temp;
//          return *head;
//        }

//       pre-> next = temp->next;

//       delete temp;
//     //   free(temp);

//     return *head;
//   }

// void printList(Node** head){
//     Node* temp = *head;

//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
//   }

// };

// int main()
// {
//     Node* head = NULL;
//     LinkedList* list = new LinkedList(head);

//     head = list->insertAtBeginning(&head, 100);
//     head = list->insertAtBeginning(&head, 10);

//     head = list->insertAtEnd(&head, 150);

//     // 5 , 10 , 100 , 150
//     // 5 , 10 , 500, 100 , 150

//     head = list->insertAfter(&head, 500, 10);

//     head = list->deleteNode(&head , 150);

//     list->printList(&head);

// }
