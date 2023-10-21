#include<bits/stdc++.h>
using namespace std;
const int N=10000;
vector<int> adjacencyList[N];
bool visited[N];
void dfs(int s)
{
    visited[s]=true;
    
    for(int v:adjacencyList[s])
    {
        if(visited[v]==true) continue;
        dfs(v);
    }
    cout<<s<<" ";
}
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        adjacencyList[u].push_back(v);
    }

    // for(int i=1;i<=n;i++)
    // {
    //     cout<<"List of -"<<i<<" ";
    //     for(int val:adjacencyList[i])
    //     {
    //         cout<<val<<" ";
    //     }
    //     cout<<endl;
        
    // }
     dfs(1);

    return 0;
}
