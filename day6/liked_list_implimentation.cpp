#include<iostream>
using namespace std;

struct number{
    int data = -1;
    number* next = NULL;
};

void push_back(number* numbers, int data){
    // add element at the beggining of the linked list
    if(numbers->data  == -1){
        numbers->data = data;
        return;
    }
    // add element end of liked list
   number* temp = new number;
   temp->data = data;

   numbers->next = temp;
  

}
    
int main(){
   number n1;
   push_back(&n1,5);
   push_back(&n1,10);

   cout << n1.data << endl;
   cout << n1.next->data << endl;
   
   
    return 0;
}

