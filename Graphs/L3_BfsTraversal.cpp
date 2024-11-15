#include <bits/stdc++.h>
using namespace std;


void BFS(vector<int>adj[] , int size){
    // int s = StartingPoint;
    queue<int> que;
    que.push(1);
    vector<int> visited(size+1,0);

    while(!que.empty()){
        int front = que.front();
        que.pop();

        if(visited[front]==0){
            visited[front] = 1;
            for(auto j : adj[front]){
                que.push(j);
            }

            cout<<front<<" ";
        }
    }
}



int main()
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

    // for(int i = 0;i<n+1;i++){
    //     for(auto j : adj[i]){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    BFS(adj,n);

    return 0;
}
