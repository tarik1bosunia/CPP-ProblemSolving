#include<iostream>
   
   
using namespace std;
    
int main(){
   int arr[] = {10, 5, 7 , 7,  12, 18, 2};
   int length = sizeof(arr) / sizeof(arr[0]);

   int sum = 0;


   for(int i = 0; i < length; ++i){
       sum = sum + arr[i];
   }
   cout << "average: " << sum / length << endl;
   
    return 0;
}