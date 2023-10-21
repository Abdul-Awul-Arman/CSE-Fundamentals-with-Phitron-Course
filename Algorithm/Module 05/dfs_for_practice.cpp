#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
bool visited [N];
int depth[N];
int hight[N];
void dfs(vector<int> adjmatrix[],int s)
{
    visited [s]=true;
    //seaction 01;
    cout<<"Visieted :"<<s<<endl;
    for(int v:adjmatrix[s])
    {
         if(visited[v] == true) continue;
         depth[v]=depth[s]+1;
         dfs(adjmatrix,v);

         hight[s]=max(hight[s],hight[v]+1);
         
    }
}
int main()
{
    int n,m;
    cin>>n>>m;

    vector<int> adjmatrix[n+1];
    

    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        adjmatrix[u].push_back(v);
        adjmatrix[v].push_back(u);
    }


    // for(int i=1;i<=n;i++)
    // {
    //     cout<<"List Of"<<" "<<i<<":"<<" ";
    //     for(int val:adjmatrix[i])
    //     {
    //         cout<<val<<" ";
    //     }
    //     cout<<endl;
    // }
    
    dfs(adjmatrix,1);
    for(int i=1;i<=n;i++)
    {
        cout<<"depth-"<<i<<" "<<depth[i]<<endl;
    }
 
    cout<<"****************************************"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<"hight-"<<i<<" "<<hight[i]<<endl;
    }


    return 0;
}