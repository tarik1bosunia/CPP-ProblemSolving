#include<iostream>
#include <stdlib.h>
   
   
using namespace std;

void insertElement(int arr[], int len, int value){
   
    // int *temp = (int*) malloc((len+1) * sizeof(int));
    int* temp = new int[len+1];

    for(int i = len; i >= 0 ; --i){
        if(arr[i-1] > value && arr[i-2] < value ){
            temp[i] = value;
            
        }else if(arr[i] > value){
            temp[i] = arr[i-1];
        }  
        else{
            temp[i] = arr[i];
        }
      
    }
    for(int i= 0 ; i <= len ; i++){
      cout << temp[i] << " ";
    }
    cout << endl;
}

int main(){
   
   int arr[] = {10, 20, 30, 59};
    int len = sizeof(arr) / sizeof(arr[0]);
    insertElement(arr, len, 57);
   
   
    return 0;
}