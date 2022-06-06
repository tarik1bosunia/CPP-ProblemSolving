#include<iostream>
   
   
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int data): data{data}, next{nullptr}{}
    
};

class LinkedList{
public:
    Node* head;
    LinkedList(Node** head){
        this->head = * head;
    }
    Node *insertAtEnd(Node **head, int data)
    {
        Node *new_node = new Node(data);

        if (*head == NULL)
        {

            *head = new_node;
            return *head;
        }

        Node *temp = *head;

        while (temp->next != NULL)
        {

            temp = temp->next;
        }

        temp->next = new_node;

        return *head;
    }

    // Print the linked list
    void printList(Node **head)
    {
        Node *temp = *head;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

};

class CircularLikedList{
public:
    Node* last;
    CircularLikedList(Node** last){

    }
    Node* addToEmpty( Node** last, int data)
    {
        // This function is only for empty list
        if (last != NULL)
        return *last;

        // Creating a node dynamically.
         // Assigning the data.
        Node* new_node = new Node(data);
    
        *last = new_node;
        // Note : list was empty. We link single node
        // to itself.
        new_node -> next = *last;

        return *last;
    }

    struct Node *addBegin(struct Node *last, int data)
    {
    if (last == NULL)
        return addToEmpty(last, data);

    // Creating a node dynamically.
    struct Node *temp
            = (struct Node *)malloc(sizeof(struct Node));

    // Assigning the data.
    temp -> data = data;

    // Adjusting the links.
    temp -> next = last -> next;
    last -> next = temp;

    return last;
    }


};



    
int main(){
   
   Node* last = NULL;
   CircularLikedList* clist = new CircularLikedList(&last);

  clist->addToEmpty(&last, 10);

   
    return 0;
}