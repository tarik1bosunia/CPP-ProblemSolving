#include<iostream>
   
   
using namespace std;
    
int main(){
   int arr[] = {10, 5, 7 , 7,  12, 18, 2};

   int min = arr[0];
   int length = sizeof(arr) / sizeof(arr[0]);


   for(int i = 1; i < length; ++i){
       if(arr[i] < min){
           min = arr[i];
       }
   }
   cout << "min: " << min << endl;
   
    return 0;
}