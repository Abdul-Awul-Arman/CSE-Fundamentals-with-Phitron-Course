#include<bits/stdc++.h>
using namespace std;
const int N=1000;
vector<int> adjlist[N];
bool visited[N];

bool dfs(int s,int p=-1)
{
    visited[s]=true;
    bool cycleDelected=false;
    for(int v:adjlist[s])
    {
        if(v==p) continue;
        if(visited[v]==true)return true;
        dfs(v,s);
        cycleDelected=cycleDelected |dfs(v,s);
    }
    return cycleDelected;
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    bool isCycle=false;

    for(int i=1;i<=n;i++)
    {
        if(visited[i]==true) continue;
        isCycle=isCycle|dfs(i);
    }

    if(isCycle==true)
    {
        cout<<"Cycle Detected.";
    }
    else
          cout<<"No Cycle Detected.";
    return 0;
}