#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n,m;
    cin>>n>>m;
    int adjmat[n+1][n+1]={0};

    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adjmat[u][v]=w;
        adjmat[v][u]=w;

    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<< adjmat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}