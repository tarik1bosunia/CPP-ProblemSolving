#include<iostream>

using namespace std;

int main(){
    string studentName = "tarik";
    int x = 10;
    int* address_of_x = &x;
    int** address_of_int_pointer = &address_of_x;

    float z = 10.25;
    float* address_of_z = &z;

    string* address_of_studentName = &studentName;

    cout << &studentName << endl; // 0xc861ff9e0
    cout << address_of_studentName << endl;

    cout << studentName << endl;  // tarik

    
    return 0;
}

