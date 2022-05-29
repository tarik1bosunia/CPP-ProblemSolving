#include<iostream>
   
   
using namespace std;
    
int main(){
    int a[][3] = {     
                        1, 0, 0,  
                        8, 6, 0,  
                        4, 5, 6
                 };  

    int rows = sizeof(a) / sizeof(a[0]);
    int cols = (sizeof(a)/ sizeof(a[0][0]))/ rows;
    
    cout << rows << endl;
    

    int b[9];

    int k = 0;
     for (int i = 0; i <= rows; i++)
     {
         for (int j = 0; j <= i; j++)
         {
             if(j <= i){
               b[k] = a[i][j];
               k++;
            }
         }
     } 
  //  b[0] = a[0][0];
    cout << b[0] << endl;

    //  for (int i = 0; i < 9; i++)
    //  {
    //     cout << b[i] << " ";
         
    //  }  
   
    return 0;
}