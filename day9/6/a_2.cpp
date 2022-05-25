#include<iostream>
#include <algorithm>
   
   
using namespace std;

void merge(int x[], int y[], int z[], int length_x, int length){

    int i;
   for ( i = 0; i < length_x; i++)
   {
       z[i] = x[i];
   }
   for ( ; i < length; i++)
   {
       z[i] = y[i];
   }

}
    
int main(){
   int x[] = {10,23,23,34};
   int y[] = {100, 200, 400, 800};
   int length_x = sizeof(x)/ sizeof(x[0]);
   int length_y = sizeof(y)/ sizeof(y[0]);

   int length = length_x + length_y;

   int z[length] ;

   merge(x, y, z, length_x, length);


    for (int i = 0; i < length; i++)
    {
        cout << z[i] << " ";
    }
    

   
   
    return 0;
}