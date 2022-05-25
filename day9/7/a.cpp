#include<iostream>
   
   
using namespace std;
    
int main(){
   
   int from_arr [4][6] = {
                            10, 20, 30, 12, 18, 24,
                            23, 24, 25, 50, 60, 70,
                            100, 240, 25, 50, 60, 700,
                            23, 24, 25, 50, 60, 70
                        };
   int length = sizeof(from_arr)/ sizeof(from_arr[0][0]);
   int to_arr[length];

   int row = 4;
   int col = 6;

   int point[row];

   int k = 0;

   for (int i = 0; i < row; i++)
   {
       for (int j = 0; j < col; j++)
       {
           to_arr[k] = from_arr[i][j];
           k++;
       }
   }

   int row_no = 3;

   int i = (row_no -1) * col ;
   int end = i + col;

   for (; i < end ; i++)
   {
       cout << to_arr[i] << " ";
   }
   
   



    return 0;
}
