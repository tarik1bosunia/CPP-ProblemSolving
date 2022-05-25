#include<iostream>
#include <algorithm>
   
   
using namespace std;

int* merge(int x[], int y[], int length_x, int length_y){
    int length = length_x + length_y;

// allocating memory for new array
// int* z = (int*) malloc(length * sizeof(int));
   int* z = new int[length];

   for (int i = 0; i < length_x; i++)
   {
       z[i] = x[i];
   }
   for (int i = length_x ; i < length; i++)
   {
       z[i] = y[i];
   }

    return z;
}
    
int main(){
   int x[] = {10,23,23,34};
   int y[] = {100, 200, 400, 800};
   int length_x = sizeof(x)/ sizeof(x[0]);
   int length_y = sizeof(y)/ sizeof(y[0]);

   int *z = merge(x, y, length_x, length_y);

   int length = length_x + length_y;

    for (int i = 0; i < length; i++)
    {
        cout << z[i] << " ";
    }
    

   
   
    return 0;
}