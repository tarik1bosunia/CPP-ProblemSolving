#include<iostream>
     
using namespace std;

typedef struct c{

    double gdp;//8
    int population;
    int zipCode;//8
    int a;// 8 //
    char w;//8
    char name[7];// // 8
    
} country;
    
int main(){

   country asian[3];
   
   
   cout << sizeof(asian) << endl;

   asian[0].gdp = 12.23;
   asian[0].population = 123443234;

   asian[1].gdp = 12.23;
   asian[3].gdp = 12.23;


   
    return 0;
}

