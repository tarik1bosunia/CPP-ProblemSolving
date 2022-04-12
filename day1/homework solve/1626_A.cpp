#include<bits/stdc++.h>

    
using namespace std;

void solve();

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

void solve(){
   string str;
   cin >> str;
   
   sort(str.begin(), str.end());
   cout << str << endl; 
}