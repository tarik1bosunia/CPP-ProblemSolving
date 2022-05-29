    #include <stdio.h>  
       
    int main()  
    {  
        int rows, cols;  
              
        //Initialize matrix a  
        int a[][3] = {     
                        {1, 2, 3},  
                        {8, 6, 4},  
                        {4, 5, 6}  
                     };  
          
        //Calculates number of rows and columns present in given matrix  
        rows = (sizeof(a)/sizeof(a[0]));  
        cols = (sizeof(a)/sizeof(a[0][0]))/rows;  
          
        if(rows != cols){  
            printf("Matrix should be a square matrix\n");  
        }  
        else{  
            //Performs required operation to convert given matrix into lower triangular matrix  
            printf("Lower triangular matrix: \n");  
            for(int i = 0; i < rows; i++){  
                for(int j = 0; j < cols; j++){  
                  if(j > i)  
                    printf("0 ");  
                  else  
                    printf("%d ", a[i][j]);  
                }  
                printf("\n");  
            }  
        }  
        return 0;  
    }  