#include <iostream>
#include <string>

using namespace std;

struct student{
    string name;
    int roll;
    int age;
};


int main(){


    student cse[60];
    int len = sizeof(cse)/ sizeof(student);

   for (int i = 0; i < len; i++)
   {
        cin >> cse[i].name >> cse[i].roll >> cse[i].age;
   }
   

   for (int i = 0; i < len; i++)
   {
        cout <<"" << cse[i].name << " "<< cse[i].roll << " "<<cse[i].age << endl;
   }

}