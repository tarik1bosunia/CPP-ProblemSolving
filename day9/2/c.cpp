#include<iostream>

using namespace std;

int* insertAtIndex(int arr[], int length,int value, int index){

   int *temp = new int[length+1];

   int i;

   for(i = 0 ; i < index-1 ; i++){ 
        temp[i] = arr[i];
   }
   temp[index-1] = value;

   for(i = index ; i <= length ;i++){
       temp[i] = arr[i-1];
   }
  
    return temp;
}
    
int main(){
   int arr[] = {2, 100, 12, 150, 13, 14, 17};

   int length = sizeof(arr)/ sizeof(arr[0]);
    int index = 5;
    int value = 99;

   int* temp = insertAtIndex(arr,length, value, index);

   for(int i = 0; i <= length ;i++){
       cout << temp[i] << " ";
   }
   
   
   
    return 0;
}