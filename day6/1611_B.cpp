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
    int a, b;
    cin >> a >> b ;

    int q = (a+b)/4;
    int x = min(a,b);

    cout << min(q,x) << endl;

}