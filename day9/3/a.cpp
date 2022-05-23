#include<iostream>
#include <array>
#include <string>
   
   
using namespace std;

int deleteString(string arr[], int length,string value)
{

   int i;

   for(i = 0 ; i < length ; i++){
       if(arr[i] == value){
            break;
        } 
   }


   for( ; i < length-1 ;i++){
       arr[i] = arr[i +1];
   }
  
    return length-1;
}

    
int main()
{
   string arr[] = { "Esha","Rabitry", "Karim", "Tarik"};

   int length = sizeof(arr)/ sizeof(arr[0]);
   string value = "Karim";

   length = deleteString(arr,length, value);

   for(int i = 0; i < length ;i++){
       cout << arr[i] << " ";
   }
   
   
   
    return 0;
}