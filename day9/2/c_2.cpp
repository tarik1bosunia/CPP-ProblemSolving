#include<iostream>

using namespace std;

void insertAtIndex(int arr[],int* elements, int size, int index,int value){
    if(index > size-1){

        cout << "insertAtIndex out of bounds.. \
        You can not insert any index greater than "<< size <<endl;;
    }

    if(*elements +1 > 100){
        cout << "You have not enough space to put an element" << endl;
        cout << "Your array can contain maximum " << size << "elements" << endl;
    }

    for(int i = *elements; i >= index; i--){
        arr[i] = arr[i-1];
    }
    arr[index] = value;
    *elements = *elements + 1;

}
    
int main(){
   int arr[100] = {2, 100, 12, 150, 13, 14, 17};
   int elements = 7;
   int size = 100;

   int index = 5;
   int value = 99;

  insertAtIndex(arr, &elements, size, index -1, value);

   for(int i = 0; i < elements ;i++){
       cout << arr[i] << " ";
   }

   
   
   
    return 0;
}