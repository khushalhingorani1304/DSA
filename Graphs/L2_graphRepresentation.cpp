//^ Weighted Graph Representaion

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    //! Matrix Representation
    //^ vector<vector<int>> adj(n+1 , vector<int>(n+1 , 0));
    // int adj[n+1][n+1] = {};

    // for(int i = 0;i<m;i++){
    //     int u,v,wt;
    //     cin>>u>>v,wt;

    //     adj[u][v] = wt;
    //     adj[v][u] = wt;
    // }

    // for(int i = 0;i<n+1; i++){
    //     for(int j = 0; j<n+1; j++){
    //         cout<<adj[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    //!Adjancency List representation

    vector<pair<int,int>> adj[n+1];

    for(int i = 0;i<m;i++){
        int u,v,wt;
        cin>>u>>v,wt;

        adj[u].push_back(make_pair(v,wt));
        adj[v].push_back(make_pair(u,wt));
    }

    // for(int i = 1;i<n+1;i++){
    //     for(auto j : adj[i]){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

}