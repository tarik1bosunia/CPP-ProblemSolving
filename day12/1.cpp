// #include <iostream>
// #include <algorithm>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;
//     Node(int data): data{data}, next{nullptr}{}
// };

// class LinkedList{

// public:
//     Node* head;

//     LinkedList(Node** head){
//         this->head = *head;
//     }

//     Node *insertAtBeginning(Node **head, int data)
//     {
//         Node *new_node = new Node(data);

//         if (*head == NULL)
//         {
//             *head = new_node;

//             return *head;
//         }

//         new_node->next = *head;
//         *head = new_node;

//         return *head;
//     }

//     Node *insertAtEnd(Node **head, int data)
//     {
//         Node *new_node = new Node(data);

//         if (*head == NULL)
//         {

//             *head = new_node;
//             return *head;
//         }

//         Node *temp = *head;

//         while (temp->next != NULL)
//         {

//             temp = temp->next;
//         }

//         temp->next = new_node;

//         return *head;
//     }

//     Node* insertion_sort(Node ** head ){

//         if(*head == NULL){
//             return *head;
//         }

//         Node* current = *head;
//         Node* index = NULL;

//         while(current != NULL){

//             index = current->next;

//             while(index != NULL){

//                 if(current->data > index->data){
//                     swap(&current, &index);
//                 }
//                 index = index->next;

//             }
//             current = current->next;
//         }
//         return *head;
//     }
//     int bubbleSort(struct Node** head, int count)
//     {
//         struct Node** h;
//         int i, j, swapped;

//         for (i = 0; i <= count; i++)
//         {

//             h = head;
//             swapped = 0;

//             for (j = 0; j < count - i - 1; j++)
//             {

//                 struct Node* p1 = *h;
//                 struct Node* p2 = p1->next;

//                 if (p1->data > p2->data)
//                 {

//                     /* update the link after swapping */
//                     *h = swap(p1, p2);
//                     swapped = 1;
//                 }

//                 h = &(*h)->next;
//             }

//             /* break if the loop ended without any swap */
//             if (swapped == 0)
//                 break;
//         }
//     }

//     // Print the linked list
//     void printList(Node **head)
//     {
//         Node *temp = *head;

//         while (temp != NULL)
//         {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }

// };

int main(){
  Node* head = NULL;
  LinkedList* list = new LinkedList(&head);

  head = list->insertAtEnd(&head , 5);
  head = list->insertAtEnd(&head, 10);
  head = list->insertAtEnd(&head, 20);
  head = list->insertAtEnd(&head, 15);
  head = list->insertAtEnd(&head, 50);
  head = list->insertAtEnd(&head, 30);

  head = list->insertion_sort(&head);
  list->printList(&head);

  return 0;
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
