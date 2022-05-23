#include<iostream>
#include <array>
#include <string>
   
   
using namespace std;

string* insertString(string arr[], int length,string value){

   string *temp = new string[length+1];

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
  
    return temp;
}
    
int main(){
   string arr[] = { "Esha","Rabitry" ,"Tarik"};
   int length = sizeof(arr)/ sizeof(arr[0]);
    string value = "Rahim";

   string* temp = insertString(arr,length, value);

   for(int i = 0; i <= length ;i++){
       cout << temp[i] << " ";
   }
   
   
   
    return 0;
}