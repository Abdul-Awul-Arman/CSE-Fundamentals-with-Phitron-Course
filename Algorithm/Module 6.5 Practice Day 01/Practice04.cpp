#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int adjacencyMatrix[n+1] [n+1]={0};

    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        adjacencyMatrix[x] [y]=1;
    }


    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<adjacencyMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}