#include<iostream>
#include <array>
#include <string>
   
   
using namespace std;
    
int main(){
   array<string,3>arr = { "Esha","Rabitry" ,"Tarik"};
   int length = arr.size();
   string *temp = new string[length+1];

   string value = "Rahim";

   int i;

   for(i = 0 ; i <= length ; i++){
       if(arr[i] < value){
           temp[i] = arr[i];
       }else{
           temp[i] = value;
           break;
       }
   }
   for(i = i + 1; i <= length ;i++){
       temp[i] = arr[i-1];
   }
   for(i = 0; i <= length ;i++){
       cout << temp[i] << " ";
   }

   
   
   
    return 0;
}