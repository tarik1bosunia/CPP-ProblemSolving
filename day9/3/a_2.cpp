#include<iostream>

using namespace std;

void deleteElement(string arr[],int* size, string value){
    int i;

    for(i = 0; i < *size; i++){
        if(arr[i] == value){
            break;
        }
    }
    if(arr[i] == value){
        for(; i < *size; i++){
            arr[i] = arr[i+1];
        }
        *size = *size -1;
        return;
    }

   cout << "Can not delete ...\nElement not found...!!!" << endl;

}
    
int main(){
   string arr[] = {"Esha" , "Rabitry","Karim", "Tarik"};
   int size = 4;
   string value = "Rahim";

    deleteElement(arr, &size, value);

   for(int i = 0; i < size ;i++){
       cout << arr[i] << " ";
   }  
   
    return 0;
}