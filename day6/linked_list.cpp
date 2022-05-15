#include<iostream>
   
   
using namespace std;

struct number{
	int data;
	number* next;
};
    
int main(){
   number n1,n2,n3,n4;
   n1.data = 5;
   n2.data = 10;
   n3.data = 15;
   n4.data = 30;

   n1.next = &n2;
   n2.next = &n3;
   n3.next = &n4;


   cout << n1.data << endl;
   cout << n1.next->data << endl;
   cout << n1.next->next->data << endl;
   cout << n1.next->next->next->data << endl;

   // singly linked list

   
   
    return 0;
}

