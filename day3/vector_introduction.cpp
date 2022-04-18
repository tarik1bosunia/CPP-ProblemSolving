// Vector in C++ STL // Standard Template Library

/*
    Vectors are same as dynamic arrays with the ability to resize itself
    automatically when an element is inserted or deleted,
    with their storage being handled automatically by the container.
    Vector elements are placed in contiguous storage so that they 
    can be accessed and traversed using iterators.
    In vectors, data is inserted at the end.
    Inserting at the end takes differential time, 
    as sometimes there may be a need of extending the array.
    Removing the last element takes only constant time because
    no resizing happens. Inserting and erasing at the beginning or
    in the middle is linear in time.
*/


// size(), resize()

#include <iostream>
#include <vector>
   
using namespace std;


int main(){
    
    // int arr[6];
    // arr[0] = 12;
    // arr[1] = 8;
    // arr[2] = 20;
    // arr[3] = 23;

    // cout << arr[10] << endl;



    vector<int> vec(6);
    int len = vec.size();
    cout << "size: " << len << endl;



    for (int i = 0; i < len; i++)
    {
       vec[i] = i+1;
    }
    cout << "before resize: ";
      for (int i = 0; i < len; i++)
    {
       cout << vec[i] << " ";
    }

    cout << endl;

    vec.resize(4);

   cout << "after resize: ";
   len = vec.size();
   cout << "size: " << len << endl;


    for (int i = 0; i < 8; i++)
    {
       cout << vec[i] << " ";
    }
}

