// #include<iostream>
   
   
// using namespace std;
    
// int main(){
   
//    int student[] = {2, 3, 6, 8, 4};

//    cout << *(student) << endl;
   
   
//     return 0;
// }











/* 
    Iterators in vector
    Iterators are used to point at the memory addresses of STL containers(array, vector, map, multimap, set, multiset, stack)
    They are primarily used in sequence of numbers, characters etc.
    They reduce the complexity and execution time of program.

begin()   – Returns an iterator pointing to the first element in the vector
end()     – Returns an iterator pointing to the theoretical element that follows the last element in the vector
rbegin()  – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
rend()    – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
cbegin()  – Returns a constant iterator pointing to the first element in the vector.
cend()    – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
crend()   – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

*/

#include<iostream>
#include <vector>
#include <iterator>
   
   
using namespace std;
	
int main()
{
//    int x = 10;
//    int *ptr;
//    ptr = &x;
//    cout << *ptr << endl;


    vector<int> tata(3);
    tata[0] = 4;
    tata[1] = 5;
    tata[2] = 6;



   for (auto ptr = tata.begin(); ptr != tata.end(); ptr++){
       *ptr = *ptr + 10;
       cout << *ptr << endl;
   }

//    for (auto ptr = tata.rbegin(); ptr != tata.rend(); ptr++){
//        cout << *ptr << endl;
//    }

//    for (auto ptr = tata.cbegin(); ptr != tata.cend(); ptr++){

//        *ptr = *ptr + 10;
//        cout << *ptr << endl;


//    }
    
    
   
   
	return 0;
}









// C++ code to demonstrate the working of
// iterator, begin() and end()
// #include<iostream>
// #include<iterator> // for iterators
// #include<vector> // for vectors
// using namespace std;
// int main()
// {
// 	vector<int> ar = { 1, 2, 3, 4, 5 };
	
// 	// Declaring iterator to a vector
// 	vector<int>::iterator ptr;
	
// 	// Displaying vector elements using begin() and end()
// 	cout << "The vector elements are : ";
// 	for (ptr = ar.begin(); ptr < ar.end(); ptr++)
// 		cout << *ptr << " ";
	
// 	return 0;	
// }







/* // C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> g1;

	for (int i = 1; i <= 5; i++)
		g1.push_back(i);

	cout << "Output of begin and end: ";
	for (auto i = g1.begin(); i != g1.end(); ++i)
		cout << *i << " ";

	cout << "\nOutput of cbegin and cend: ";
	for (auto i = g1.cbegin(); i != g1.cend(); ++i)
		cout << *i << " ";

	cout << "\nOutput of rbegin and rend: ";
	for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
		cout << *ir << " ";

	cout << "\nOutput of crbegin and crend : ";
	for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
		cout << *ir << " ";

	return 0;
} */


/* vector<int> v{10,20,30,40,50};
vector<int> :: iterator it;

for (it = v.begin(); it != v.end(); it++)
{
    *it = *it - 10;
}
This is NOT allowed. It will throw an error:

for (it = v.cbegin(); it != v.cend(); it++)
{
    *it = *it - 10;
} */