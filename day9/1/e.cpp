#include<iostream>
#include <math.h>
   
   
using namespace std;
    
int main(){
   float arr[] = {0, 0.5236, 45, 60, 90};
   int length = sizeof(arr) / sizeof(arr[0]);


   for(int i = 0; i < length; ++i){
       cout << sin(arr[i]) << " ";
   }
   cout << endl;
   
    return 0;
}