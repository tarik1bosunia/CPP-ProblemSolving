// Queue implementation in C++

#include <iostream>
#define SIZE 5

using namespace std;

class Queue {
private:
    int items[SIZE], front, rear;

public:
  Queue() {
    front = -1;
    rear = -1;
  }

  bool isFull() {
    if (front == 0 && rear == SIZE - 1) return true;
    
    if(front == rear + 1 ) return true;

    if(rear + 1 == front ) return true;

    
    return false;
  }

  bool isEmpty() {
    if (front == -1) return true;
   
    return false;
  }

  void enQueue(int element) {
      
      
    if (isFull()) {

      cout << "Queue is full." << " Can not insert!!!" << endl;

      cout << "Queue is full";

      return;
    }

    
     rear++;

     if(rear == SIZE) rear = 0;
    
     if(rear >= SIZE){
        rear = 0;
    }

    if (front == -1) front = 0;

      items[rear] = element;

      cout << endl;
      cout << "Inserted " << element << endl;
      cout << endl
         << "Inserted " << element << endl;
    
  }

  int deQueue() {
    int element;
    if (isEmpty()) {
      cout << "Queue is empty." << " Can not dequeue!!!" << endl;
      return (-1);
    } else {
      element = items[front];
      if (front >= rear) {
        front = -1;
        rear = -1;
      } /* Q has only one element, so we reset the queue after deleting it. */
      else {
        front++;
        if(front == SIZE) front = 0;
      }
      cout << endl
         << "Deleted -> " << element << endl;
      return (element);
    }
  }

  void display() {
    /* Function to display elements of Queue */
    int i = front;
    if (isEmpty()) {
      cout << endl
         << "Empty Queue" << endl;
         return;
    }
     
      cout << endl
         << "Front index-> " << front;
      cout << endl
         << "Items -> ";

      
      while(i != rear){
        cout << items[i] << "  ";
        i++;
        if(i >= SIZE ){
          i = 0;
        }
      }
      cout << items[rear] << "  ";
      cout << endl;
      cout << "Rear index-> " << rear << endl;
  }
        
};

int main() {
  Queue q;

  //deQueue is not possible on empty queue
  q.deQueue();

  //enQueue 5 elements
  q.enQueue(1);
  q.enQueue(2);
  q.enQueue(3);
  q.enQueue(4);
  q.enQueue(5);

  // // 6th element can't be added to because the queue is full
  q.enQueue(6);

  q.display();

  // //deQueue removes element entered first i.e. 1
  q.deQueue();
  q.deQueue();
  q.deQueue();

  // //Now we have just 4 elements
  q.display();



  q.enQueue(7);
  q.enQueue(8);

  q.display();



  q.enQueue(7);
  q.enQueue(8);

  q.display();

  return 0;
}