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
    Node *head;
    LinkedList(Node *head)
    {
        this->head = head;
    }
    Node *insertAtBeginning(Node **head, int data)
    {
        Node *new_node = new Node(data);

        if (*head == NULL)
        {
            *head = new_node;

            return *head;
        }
        
        new_node->next = *head;
        *head = new_node;

        return *head;
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

    Node *insertAfter(Node **head, int data, int key)
    {

        Node *new_node = new Node(data);

        if (*head == NULL)
        {
            *head = new_node;
            return *head;
        }

        Node *temp = *head;

        while (temp->data != key && temp->next != NULL)
        {
            temp = temp->next;
        }

        if (temp->next == NULL)
        {

            cout << "Can't Insert " << key << " not found!!!" << endl;
            return *head;
        }

        new_node->next = temp->next;

        temp->next = new_node;

        return *head;
    }

    Node *insert_into_sorted_list(Node **head, int data)
    {
        // not working insert at end.. I have to solve this issue
        Node *new_node = new Node(data);

        if (*head == NULL)
        {
            *head = new_node;
            return *head;
        }

        if ((*head)->data >= data)
        {
            new_node->next = *head;
            *head = new_node;
            return *head;
        }

        Node *pre = *head;
        Node *temp = *head;

        while (temp->data < data && temp != NULL)
        {
            pre = temp;
            temp = temp->next;
        }
        pre->next = new_node;
        new_node->next = temp;

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
            cout << temp->data << endl;
        }
        cout << endl;
    }
};

int main()
{

    Node *head = NULL;
    LinkedList *list = new LinkedList(head);

    head = list->insertAtEnd(&head, 2);
    head = list->insertAtEnd(&head, 3);
    head = list->insertAtEnd(&head, 9);
    head = list->insertAtEnd(&head, 42);
    head = list->insertAtEnd(&head, 65);
    head = list->insertAtEnd(&head, 100);

    head = list->insert_into_sorted_list(&head, 570);

    list->printList(&head);

    return 0;
}