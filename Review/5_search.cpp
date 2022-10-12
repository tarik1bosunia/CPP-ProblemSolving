#include<iostream>
#include<algorithm>

using namespace std;

void linear_search(int ar[], int length, int key){
    for(int i = 0 ; i < length; i++){
        if(key == ar[i]){
            cout << "the element " << key << " found at index: " << i << endl;
            return;
        }
    }
    cout << "we didin't find the element " << key << endl;
}
void binary_search(int ar[], int length, int key){
    int left_index = 0 , right_index = length -1;
    int mid_index;
    while (left_index <= right_index)
    {
        mid_index = (left_index + right_index) / 2;

        if(ar[mid_index] == key ) {
            cout << "the element " << key << " found at index: " <<  mid_index << endl;
            return;
        }
        else if(ar[mid_index] < key) {
            left_index = mid_index + 1;
        }
        else if(ar[mid_index] > key){
            right_index = mid_index -1;
        }

    }
    
    cout << "we didin't find the element " << key << endl;

}

int main(){
    int ar[] = {1, 3, 7, 9, 25, 30, 35, 77 , 89 , 100 , 200}; 
    int length = sizeof(ar) / sizeof(ar[0]);

    // linear_search(ar, length, 77 );
    binary_search(ar, length, 77 );
    
    return 0;
}

