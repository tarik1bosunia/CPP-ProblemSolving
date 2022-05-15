#include <bits/stdc++.h>

using namespace std;

void solve();
bool result(string s2);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

void solve()
{
    string s1 = "", s2;
    cin >> s2;

    if(result(s2)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

bool result(string s2)
{
    int len = s2.length();
    if(len < 2){
        return false;
    }
    
    for (int i = 0; i < len-1; i++)
    {
        if(s2[i] == 'B'  && s2[i+1] == 'B'){
            return false;
        }
       
    }
     return true;
}