#include <iostream>
using namespace std;

// a[] is an array
// n is the size of array a[]

void swap(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}

void print(int a[], int n){
    for(int i = 0 ; i < n ; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}


void bubble_sort(int a[], int n){
    for(int i = 0 ; i < n ; i++){

        for(int j = 0; j < n-i-1; j++){
            if( a[j+1] < a[j]){
                swap(a[j], a[j+1]);
            }
        }

    }
}

int main(){
    int a[] = {10, 20, 15, 50, 100, 12, 8, 7};

    bubble_sort(a, 8);
    print(a, 8);

    return 0;
}