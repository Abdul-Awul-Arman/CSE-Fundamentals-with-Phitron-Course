#include<bits/stdc++.h>
using namespace std;
const int N=1000;
vector<int> adjlist[N];
bool visited[N];
int level[N];
void dfs(int s)
{
    visited[s]=true;
    for(int v:adjlist[s])
    {
        if(visited[v]==true)continue;
        dfs(v);
    }
}
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s]= true;
    level[s]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        cout<<"visited Node "<<u<<endl;
        for(int v:adjlist[u])
        {
           if(visited[v ]==true) continue;
            q.push(v);
            visited[v]=true;
            level[v]=level[u]+1;
        }
    }
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
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
   
//    int cc=0;
//    for(int i=1;i<=n;i++)
//    {
//        if(visited[i]==true) continue;
//        dfs(i);
//        cc++;
//    }

//    cout<<"numbers of connected components "<<cc<<endl;
    bfs(0);
    for(int i=0;i<n;i++)
    {
        cout<<level[i]<<endl;
    }
    return 0;
}