#include<bits/stdc++.h>
using namespace std;
const int N=1000;
vector<int> adjacencyList[N];
bool visited [N];
int hight[N];
int depth[N];
void dfs(int s)
{
    visited[s]=true;
    for(int v:adjacencyList[s])
    {
        if(visited[v]==true) continue;
        depth[v]=depth[s]+1;
        dfs(v);
        hight[s]=max(hight[s],hight[v]+1);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u);
    }

    // for(int i=1;i<=n;i++)
    // {
    //     for(int val:adjacencyList[i])
    //     {
    //         cout<<val<<" ";
    //     }
    //     cout<<endl;
    // }
    dfs(1);

    int d;
    cin>>d;
    // cout<<"Depth Of "<<d<<" Is :"<<depth[d];
    cout<<"Hight Of "<<d<<" Is :"<<hight[1];

    return 0;
}