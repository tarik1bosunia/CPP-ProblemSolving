#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int DATA)
    {
        data = DATA;
        next = NULL;
    }
};

void print_linked_list(Node *root)
{
    Node *temp = root;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insert_at_the_begging(Node **head, int data)
{
    Node *new_node = new Node(5);

    if (head == NULL)
    {
        *head = new_node;
        return;
    }

    new_node->next = (*head);
    *head = new_node;
}
void insert_at_the_middle(Node **head, int data, int key)
{
    Node *new_node = new Node(data);
    Node *temp = (*head);
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            // insert
            new_node->next = temp->next;
            temp->next = new_node;
        }
        temp = temp->next;
    }
}
void insert_at_the_end(Node **head, int data)
{
    Node *new_node = new Node(data);

    Node *temp = (*head);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void search(Node **head, int key)
{
    Node *temp = (*head);

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            cout << "found" << endl;
            return;
        }

        temp = temp->next;
    }
    cout << "not found" << endl;
}

void sorted_search(Node **head, int key)
{
    Node *temp = (*head);

    while (temp->data <= key && temp != NULL)
    {
        if (temp->data == key)
        {
            cout << "found" << endl;
            return;
        }

        temp = temp->next;
    }
    cout << "not found" << endl;
}
void sortLinkedList(Node **head)
{
    Node *current = *head, *index = NULL;
    if (head == NULL)
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

                    swap(current->data, index->data);
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

int main()
{
    Node *head = NULL;

    insert_at_the_begging(&head, 55);
    insert_at_the_end(&head, 120);
    insert_at_the_end(&head, 20);
    insert_at_the_end(&head, 10);
    insert_at_the_end(&head, 40);

    // search(&head, 20);
    sortLinkedList(&head);
    print_linked_list(head);

    return 0;
}
