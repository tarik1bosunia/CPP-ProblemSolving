#include<iostream>
   
   
using namespace std;

int linear_search(int arr[], int length, int key){
    for (int i = 0; i < length; i++)
    {
        if(arr[i] == key){
            cout << "Element found at " << i << endl;
            return i;
        }
    }

    cout << "Element can not found!!!" << endl;
    return -1;
    
}

int binary_search(int arr[], int length, int key){
   int min = 0;
   int max = length-1;
   int mid;
   do{
       mid = (min + max)/2;

       if(arr[mid] == key){
           cout << "peye gesi!!! at index: " << mid << endl;
           return mid;
       }else if(arr[mid] > key){
           max = mid -1;
       }else if(arr[mid] < key){
           min = mid + 1;
       }
       
   }while(min <= max);

    cout << "pai nai" << endl;

    return -1;
}
    
int main(){
   
    int arr[] = {11, 23, 34, 77, 86,125};

    int length = sizeof(arr) / sizeof(arr[0]);
    //linear_search(arr, length, 100);
    binary_search(arr, length, 100);

   
    return 0;
}