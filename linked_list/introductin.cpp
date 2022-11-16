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
void insert_at_the_middle(Node** head , int data, int key){
    Node* new_node = new Node(data);
    Node* temp = (*head);
    while (temp != NULL)
    {
       if(temp->data == key){
            // insert
            new_node->next = temp->next;
            temp->next = new_node;
       }
       temp = temp->next;
    }
}
void insert_at_the_end(Node** head, int data){
    Node* new_node = new Node(data);

    Node* temp = (*head);
    while (temp->next != NULL)
    {
       temp = temp->next;
    }
    temp->next = new_node;
}

void insert_1(Node** head , int data){
    Node* new_node = new Node(data);
    if((*head) == NULL){
        (*head) = new_node;
         return;
    }
    Node* temp = (*head);

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    
}

void delete_from_sorted_linked_list_4(Node** head, int key){
    Node* temp = (*head);
    if(temp->data == key){
        *head = temp->next;
    }
    while ( temp->next->data <= key  && temp->next != NULL)
    {
        if(temp->next->data == key){
            // Node* instant = temp->next;
            temp->next = temp->next->next;

            return;
        }
        temp = temp->next;
    } 
}
void delete_from_a_given_index_4(Node** head, int index)
{
    if(index == 1){
            *head = (*head)->next;
            return;
    }

    Node* temp = (*head);


   for(int i = 1; i < index-1; i++){
        temp = temp->next;
          if(temp == NULL){
            cout << "can't find this index, so can not delete!";
            return;
          }
   }

    temp->next = temp->next->next;
         
}


int main(){
    Node* head = NULL;
    // Node* a = new Node(10);
    // Node* b = new Node(20);
    // Node* c = new Node(30);
    // Node* d = new Node(25);

    // a->next = b;
    // b->next = c;
    // c->next = d;
    // head = a;
    // insert_at_the_begging(&head, 5);
    // insert_at_the_middle(&head, 50, 20);
    // insert_at_the_end(&head, 60);

    insert_1(&head, 0);
    insert_1(&head, 3);
    insert_1(&head, 5);
    insert_1(&head, 7);
    insert_1(&head, 8);
    insert_1(&head, 10);

    // delete_from_sorted_linked_list_4(&head, 5);
    delete_from_a_given_index_4(&head, 1);

    print_linked_list(head);

    
    return 0;
}
// int a = 5;
// int* x = &a;
// print(x)
// print(*x);