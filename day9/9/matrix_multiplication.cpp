#include <iostream>
using namespace std;
int main()
{
    int a[][3] = {
                    1 , 2, 3,
                    4 , 5 , 6
                };
    const int row_a = 2, col_a = 3;

    int b[][2] = {
                    10 , 20,
                    30,  40 ,
                    50 , 60
                };
   const int row_b = 3, col_b = 2;

   int multi[row_a][col_b];

    int i, j, k;
    
    for (i = 0; i < row_a; i++)
    {
        for (j = 0; j < col_a; j++)
        {
            multi[i][j] = 0;
            for (k = 0; k < col_a; k++)
            {
                multi[i][j] = multi[i][j] +  a[i][k] * b[k][j];
            }
        }
    }


   // printing result
    for (i = 0; i < row_a; i++)
    {
        for (j = 0; j < col_b; j++)
        {
            cout << multi[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}