#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> adj[N];
void bfs(int s,bool visited[],int level[])
{
    queue<int> q;
    q.push(s);
    visited[s]=true;
    level[s]=0;

    while(!q.empty())
    {
        int u=q.front();
        q.pop();

        for(int v:adj[u])
        {
            if(visited[v]==true) continue;
            q.push(v);
            visited[v]=true;
            level[v]=level[u]+1;

        }
    }

}
int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
         int u,v;
         cin>>u>>v;
         adj[u].push_back(v);
         adj[v].push_back(u);
    }

    int x;
    cin>>x;

    while(x--)
    {
        int level[N]={0};
        bool visited[N]={false};
        int s,d;
        cin>>s>>d;
        
        bfs(s,visited,level);
        if(visited[d]==false) cout<<-1<<endl;
        else cout<<level[d]<<endl;
        
    }


    return 0;
}