#include<iostream>
   
   
using namespace std;
    
int main(){
   int arr[] = {10, 5, 7 , 7,  12, 18, 2};

   int max = arr[0];
   int length = sizeof(arr) / sizeof(arr[0]);


   for(int i = 1; i < length; ++i){
       if(arr[i] > max){
           max = arr[i];
       }
   }
   cout << "max: " << max << endl;
   
    return 0;
}