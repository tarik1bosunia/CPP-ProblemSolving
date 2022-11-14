#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int DATA){
        data = DATA;
        next = NULL;
    }

};



void print_linked_list(Node* root){
    Node* temp = root;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
}

void insert_at_the_begging(Node** head, int data){
    Node* new_node = new Node(5);

    if(head == NULL){
        *head = new_node;
        return;
    }

    new_node->next = (*head);
    *head = new_node;
}


int main(){
    Node* head = NULL;
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(25);

    a->next = b;
    b->next = c;
    c->next = d;
    head = a;
    insert_at_the_begging(&head, 5);
    print_linked_list(head);
    
    return 0;
}

