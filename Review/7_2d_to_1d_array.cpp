#include<iostream>

using namespace std;

int main(){
int D2[][3] = {
        { 1,  2,  3 },
        { 4,  5,  6 },
        { 7,  8,  9 },
        { 10, 11, 12}
    };
int d1_length = sizeof(D2) / sizeof(D2[0][0]);
int d2_length = sizeof(D2) / sizeof(D2[0]);
 int* D1 = new int[d1_length] ;

 for(int i = 0,k = 0 ; i < d2_length; i++){
    for(int j = 0; j< 3; j++){
        D1[k] = D2[i][j];
        k++;
    }
 }

 for(int j = 0; j< d1_length ; j++){
    cout << D1[j] << " ";
 }
 cout << endl;
 int start =  3 * (3-1);  // coloum * sari_number_which_you_want_to_print -1
 int end = 3 * 3 - 1; // (coloum * sari_number_which_you_want_to_print) -1

cout << " 3 no row: ";
for(int i = start; i <= end ; i++){
    cout << D1[i] << " ";
}

    
    return 0;
}


    // D2[0]= > [0][0] , [0][1] , [0][2]
    // [1]
    // [2]
    // [3]