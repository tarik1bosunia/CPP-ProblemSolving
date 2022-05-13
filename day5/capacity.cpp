// Capacity

// size() – Returns the number of elements in the vector.
// max_size() – Returns the maximum number of elements that the vector can hold.
// capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
// resize(n) – Resizes the container so that it contains ‘n’ elements.
// empty() – Returns whether the container is empty.
// shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
// reserve() – Requests that the vector capacity be at least enough to contain n elements.

// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<double> studentRoll;
//     // studentRoll.push_back(55);
//     // studentRoll.push_back(56);
//     // studentRoll.push_back(46);
//     // studentRoll.push_back(48);
//     // studentRoll.push_back(40);

//     // cout << "before resize: ";
//     // for (int i = 0; i < studentRoll.size(); i++)
//     // {
//     //     cout << studentRoll[i] << " ";
//     // }
//     // cout << endl;

//     // studentRoll.resize(10);
//     // cout << "after resize: ";
//     // for (int i = 0; i < studentRoll.size(); i++)
//     // {
//     //     cout << studentRoll[i] << " ";
//     // }
//     // cout << endl;

//     // cout << "max size: " << studentRoll.max_size() << endl; 
//     cout << "size: " << studentRoll.size() << endl; 
//     cout << "capacity: " << studentRoll.capacity() << endl; 
//     cout << "empty: " << studentRoll.empty() << endl; 


    

//     return 0;
// }





#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> g1;
    g1.reserve(30);

	for (int i = 1; i <= 5; i++)
		g1.push_back(i);
    for (int i = 0; i < 5; i++){
            cout << g1[i] << " ";
    }
    cout << endl;

	// resizes the vector size to 4
	g1.resize(4);
    //g1.shrink_to_fit();
    for (int i = 0; i < 5; i++){
            cout << g1[i] << " ";
    }
    cout << endl;


	return 0;
}


	// // prints the vector size after resize()
	// cout << "\n Size : " << g1.size();

	// // checks if the vector is empty or not
	// // if (g1.empty() == false)
	// // 	cout << "\nVector is not empty";
	// // else
	// // 	cout << "\nVector is empty";

	// // Shrinks the vector
	// g1.shrink_to_fit();
	// cout << "\nVector elements are: ";
	// for (auto it = g1.begin(); it != g1.end(); it++)
	// 	cout << *it << " ";
