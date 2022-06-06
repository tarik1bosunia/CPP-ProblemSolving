#include <iostream>
#include <algorithm>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int data) : data{data}, next{nullptr} {}
};

struct Node* swap(struct Node* ptr1, struct Node* ptr2)
{
	struct Node* tmp = ptr2->next;
	ptr2->next = ptr1;
	ptr1->next = tmp;
	return ptr2;
}

void bubble_sort(Node **head);

class LinkedList
{

public:
    Node *head;

    LinkedList(Node **head)
    {
        this->head = *head;
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

int main()
{
    Node *head = NULL;
    LinkedList *list = new LinkedList(&head);

    list->insertAtEnd(&head, 5);
    list->insertAtEnd(&head, 10);
    list->insertAtEnd(&head, 20);
    list->insertAtEnd(&head, 15);
    list->insertAtEnd(&head, 50);
    list->insertAtEnd(&head, 30);

    bubble_sort(&head);
    list->printList(&head);

    return 0;
}

// Sort the linked list
void sort(struct Node **head)
{
    Node *current = *head, *index = NULL;
    int temp;

    if (head == NULL)
    {
        return;
    }

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





// // C++ program to sort Linked List
// // using Bubble Sort
// // by swapping nodes

// #include <iostream>
// using namespace std;

// /* structure for a node */
// struct Node
// {
// 	int data;
// 	struct Node* next;
// } Node;

// /*Function to swap the nodes */
// struct Node* swap(struct Node* ptr1, struct Node* ptr2)
// {
// 	struct Node* tmp = ptr2->next;
// 	ptr2->next = ptr1;
// 	ptr1->next = tmp;
// 	return ptr2;
// }

// /* Function to sort the list */
// int bubbleSort(struct Node** head, int count)
// {
// 	struct Node** h;
// 	int i, j, swapped;

// 	for (i = 0; i <= count; i++)
// 	{

// 		h = head;
// 		// swapped = 0;

// 		for (j = 0; j < count - i - 1; j++)
// 		{

// 			struct Node* p1 = *h;
// 			struct Node* p2 = p1->next;

// 			if (p1->data > p2->data)
// 			{

// 				/* update the link after swapping */
// 				*h = swap(p1, p2);
// 				swapped = 1;
// 			}

// 			h = &(*h)->next;
// 		}

// 		// /* break if the loop ended without any swap */
// 		// if (swapped == 0)
// 		// 	break;
// 	}
// }

// /* Function to print the list */
// void printList(struct Node* n)
// {
// 	while (n != NULL)
// 	{
// 		cout << n->data << " -> ";
// 		n = n->next;
// 	}
// 	cout << endl;
// }

// /* Function to insert a struct Node
// at the beginning of a linked list */
// void insertAtTheBegin(struct Node** start_ref, int data)
// {
// 	struct Node* ptr1
// 		= (struct Node*)malloc(sizeof(struct Node));

// 	ptr1->data = data;
// 	ptr1->next = *start_ref;
// 	*start_ref = ptr1;
// }

// // Driver Code
// int main()
// {
// 	int arr[] = { 78, 20, 10, 32, 1, 5 };
// 	int list_size, i;

// 	/* start with empty linked list */
// 	struct Node* start = NULL;
// 	list_size = sizeof(arr) / sizeof(arr[0]);

// 	/* Create linked list from the array arr[] */
// 	for (i = 0; i < list_size; i++)
// 		insertAtTheBegin(&start, arr[i]);

// 	/* print list before sorting */
// 	cout <<"Linked list before sorting\n";
// 	printList(start);

// 	/* sort the linked list */
// 	bubbleSort(&start, list_size);

// 	/* print list after sorting */
// 	cout <<"Linked list after sorting\n";
// 	printList(start);

// 	return 0;
// }


