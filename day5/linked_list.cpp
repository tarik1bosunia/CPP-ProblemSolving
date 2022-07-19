#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int data): data{data}, next{nullptr}{}
};

void print_linked_list(Node* head){
    if(head == nullptr) return;

    Node* temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    
}


int main()
{
    Node* a = new Node(1);
    Node* b = new Node(20);
    Node* c = new Node(100);
    

    a->next = b;
    b->next = c;


    print_linked_list(a);
    
    
    return 0;
}

