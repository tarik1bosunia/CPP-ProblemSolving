#include<iostream>

using namespace std;

int delete_from_index(int length, int ar[], int index){

    for(int i = index-1; i < length-1; ++i){
        ar[i] = ar[i+1];
    }
    return length-1;
}

int main(){
    int ar[] = {1, 2, 3, 4, 5};
    int length = sizeof(ar) / sizeof(ar[0]);

    length = delete_from_index(length , ar, 2);

    // print the array
    for(int i = 0; i < length; i++){
        cout << ar[i] << " ";
    }
    
    return 0;
}

