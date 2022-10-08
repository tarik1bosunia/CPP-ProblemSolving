#include<iostream>
#include<vector>
#include<stack>

using namespace std;

vector<int> ar[50001];
vector<int> rev[50001];
int vis[50001];
stack<int> stk;
int scc = 0;

void dfs1(int src){
    vis[src] = 1;
    
    for(int child: ar[src]){
        if(vis[child] == 0){
            dfs1(child);
        }
    }

    stk.push(src); // stk -> 3  7 6  5  4  2  1  0
    cout << src << " ";
}

void dfs2(int src){
    vis[src] = 1;
    cout << src << " ";
    
    for(int child : rev[src]){
        if(vis[child] == 0){
           dfs2(child);
        }
    }
    
}

int main(){
    int n, m, s, d;
    cin >> n >> m; // n = node, m = edge

    for(int i= 1; i <=m ; i++){
        cin >> s >> d;
        ar[s].push_back(d); 
        rev[d].push_back(s);
    }
    // creating stack and print it
    cout << "stk: ";
    dfs1(0);
    cout << "\n";

    // make sure visited array's elements are 0
    for(int i = 0 ; i <= n; i++){
        vis[i] = 0;
    }

    // printing strogly connected component
   for(int i = 1; i <=n; i++){
        int curr = stk.top();
        stk.pop();
        if(vis[curr] == 0){
            scc = scc + 1;
            cout << "strongly connected component no " << scc << " : ";
            dfs2(curr);
            cout << "\n";
        }     
   }
    
    return 0;
}

