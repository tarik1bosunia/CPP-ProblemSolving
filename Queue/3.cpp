#include<iostream>
using namespace std;

#define SIZE 3
int ar[SIZE];

int front = 0;
int rear = -1;
int itemCount = 0;


void enQueue(int data){
    if(itemCount == SIZE){
        cout << "Queue is full ... Can't insert " << data << endl; 
        return;
    }
   
    itemCount = itemCount + 1;
    rear = rear + 1;
    ar[rear] = data;
    cout << "Inserted Successfully "<< data << endl;
    
}

void deQueue()
{
    if(rear == -1){
        cout << "Queue is full ... Can't DeQueue...!!!" << endl; 
        return;
    }
    cout << ar[front] << " removed successfully!!!" << endl;
    for(int i = front; i < rear; i++){
        ar[i] = ar[i+1];
    }
    rear = rear - 1;

}

void printQueue()
{
    cout << "Queue items: ";
    for(int i = front; i <= rear; i++){
        cout << ar[i] << " ";
    }
    cout << endl;
}





int main(){
    enQueue(7);
    enQueue(5);
    enQueue(3);
    enQueue(1);

    printQueue();

    deQueue();
    deQueue();
    deQueue();
    deQueue();
    printQueue();
    
    return 0;
}

