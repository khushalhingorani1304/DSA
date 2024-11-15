#include <bits/stdc++.h>
using namespace std;

void Dfs(int node, int visited[], vector<int> adj[]){
    cout<<node;
    visited[node] = 1;

    for(auto it : adj[node]){
        if(visited[it]!=1){
            Dfs(it, visited, adj);
        }
    }
}


void DfsTraversal(vector<int> adj[],int n){
    int visited[n+1] = {0};
    // vector<int> list;
    int node = 1;
    Dfs(node,visited,adj);
    
}






int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n>>m;

    vector<int> adj[n+1];

    for(int i = 0;i<m;i++){
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    DfsTraversal(adj,n);

    return 0;
}



//^ Test Case
// 8 8
// 1 2
// 1 3
// 2 5
// 2 6
// 3 4
// 3 7
// 4 8
// 7 8