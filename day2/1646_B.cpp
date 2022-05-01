#include<bits/stdc++.h>
   
using namespace std;

typedef long long ll;

void solve();

int main(){
    int t;
    cin >> t;
    while(t--){
         solve();
        
    }
}

void solve(){
    // taking input
    int n;
    vector<ll> vec;
    cin >> n;
    vec.resize(n);
    for (int i = 0; i < n; i++)
    {
       cin >> vec[i];
    }


   //  solving problem
  
   sort(vec.begin(),vec.end());




   vector<ll> blue_sum = {vec[0] + vec[1]} , red_sum;


    
   for (int i = 2; i < n; i++)
   {
       blue_sum.push_back(vec[i] + blue_sum[i-2]);
   }

    int j = 0;
   for (int i = n-1; i >= 0; i--)
   {
       if(i == n-1){
           red_sum.push_back(vec[i]);

       }else{
          red_sum.push_back(vec[i] + red_sum[j-1]);
       }
       j++;
   }


   for (int i = 0; i < n-2; i++)
    {
        if(red_sum[i] > blue_sum[i]){
            cout << "YES" << endl;
            return;
        }
    }

   cout << "NO" << endl;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// 	int t; cin >> t;
// 	for(int test_number = 0; test_number < t; test_number++){
// 		int n; cin >> n;
// 		vector <long long> a(n);
// 		for(int i = 0; i < n; i++){
// 			cin >> a[i];
// 		}
// 		sort(a.begin(), a.end());
// 		vector <long long> prefix_sums = {0};
// 		for(int i = 0; i < n; i++){
// 			prefix_sums.push_back(prefix_sums.back() + a[i]);
// 		}
// 		vector <long long> suffix_sums = {0};
// 		for(int i = n - 1; i >= 0; i--){
// 			suffix_sums.push_back(suffix_sums.back() + a[i]);
// 		}
// 		bool answer = false;
// 		for(int k = 1; k <= n; k++){
// 			if(2 * k + 1 <= n){
// 				long long blue_sum = prefix_sums[k + 1];
// 				long long red_sum = suffix_sums[k];
// 				if(blue_sum < red_sum){
// 					answer = true;
// 				}
// 			}
// 		}
// 		if(answer) cout << "YES\n";
// 		else cout << "NO\n";
// 	}
// 	return 0;
// }
