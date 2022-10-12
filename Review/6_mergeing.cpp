#include<iostream>

using namespace std;

void two_int_array_merge(int ar1[], int ar2[],int* ar, int l_ar1, int l_ar2){
    ar = new int (l_ar1 + l_ar2);
    int i = 0;

    for (; i < l_ar1; i++)
    {
        ar[i] = ar1[i];
    }
    for (int j =0; j < l_ar2; j++, i++)
    {
        ar[i] = ar2[j];
    }
    
}

int main(){
    int ar1[] = {1, 2, 3, 9};
    int ar2[] = {2, 3, 4, 5 , 8};
    int length_ar1 = sizeof(ar1) / sizeof(ar1[0]);
    int length_ar2 = sizeof(ar2) / sizeof(ar2[0]);
    int* ar;

    two_int_array_merge(ar1, ar2, ar, length_ar1, length_ar2);

    for(int i = 0; i < (length_ar1 + length_ar2) ; i++){
        cout << ar[i] << " ";
    }
    cout << endl;

    delete [] ar;

    
    return 0;
}

