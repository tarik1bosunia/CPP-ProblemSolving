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

    string s, temp;
    int length, count = 0;

    cin >> length >> s;

    temp = s;
    // tarik
    // ['t', 'a', 'r', 'i','k', '\0']
    // sort(1, 5)

    sort(temp.begin(), temp.end());


    for (int i = 0; i < length; i++)
    {
        if(s[i] ! temp[i]){
            count++;
        }
    }
    
    cout << count << "\n";
}



















//  string s, temp;
//     int length;
//     int count = 0;


//     cin >> length >> s;

//     temp = s;
//     sort(temp.begin(), temp.end());

//     for (int i = 0; i < length; i++)
//     {
//         if(temp[i] != s[i]){
//             count++;
//         }
//     }
//     cout << count << endl;

