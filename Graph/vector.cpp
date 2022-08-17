#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v1[4];
    v1[0].push_back(1);
    v1[0].push_back(2);
    v1[0].push_back(3);


    v1[1].push_back(0);
    v1[1].push_back(2);

    v1[2].push_back(0);
    v1[2].push_back(1);

    v1[3].push_back(0);
    //  0 => 1 2 3
    //  1 => 0 2
    //  2 => 0 1
    //  3 => 0 

  //  1 10 5 100 11  ....
    
    return 0;
}

