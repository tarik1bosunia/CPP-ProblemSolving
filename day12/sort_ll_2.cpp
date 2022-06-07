#include <iostream>
#include <algorithm>
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
    Node *head;
    LinkedList(Node **head)
    {
        this->head = *head;
    }
    Node *insertAtEnd(Node **head, int data);
    void printList(Node **head);
    void sort(Node** head);
};



Node *LinkedList::insertAtEnd(Node **head, int data)
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

void LinkedList::printList(Node **head)
{
    Node *temp = *head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void LinkedList::sort(Node** head){
    Node* step = *head;
    Node* index;

    while (step != NULL)
    {
        index = step->next;
        
        while(index != NULL){

            if(step->data > index->data){
                swap(step->data, index->data);
            }

            index = index->next;
        }
        step = step->next;
    }
     
}


int main()
{
    Node* head = NULL;
    LinkedList* list = new LinkedList(&head);
    list->insertAtEnd(&head, 8);
    list->insertAtEnd(&head, 3);
    list->insertAtEnd(&head, 5);
    list->insertAtEnd(&head, 4);
    list->insertAtEnd(&head, 2);
    list->insertAtEnd(&head, 7);
    list->insertAtEnd(&head, 9);
    list->insertAtEnd(&head, 5);


    cout << "before sort: ";
    list->printList(&head);

    list->sort(&head);
    cout << "after sort: ";
    list->printList(&head);

    return 0;
}