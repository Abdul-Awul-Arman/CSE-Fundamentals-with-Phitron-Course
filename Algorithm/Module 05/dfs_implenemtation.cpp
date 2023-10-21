#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
bool visited[N];
void dfs(vector<int>adjmat[],int s)
{
      visited[s]=true;
      cout<<"visited nod"<<":"<<s<<endl;
      for(int v:adjmat[s])
      {
          if(visited[v]== true) continue;
          dfs(adjmat,v);
          
      }
}
int main()
{
    int n;
    cin>>n;
    vector<int> adjmat[n+1];
    int m;
    cin>>m;

    for(int i=0;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        adjmat[u].push_back(v);
        adjmat[v].push_back(u);
    }


    // for(int i=1;i<=m;i++)
    // {
    //     cout<<"List"<<i<<":"<<" ";
    //     for(int j:adjmat[i])
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    dfs(adjmat,1);


    return 0;
}