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

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(25);

    a->next = b;
    b->next = c;
    c->next = d;

    print_linked_list(a);
    
    return 0;
}

