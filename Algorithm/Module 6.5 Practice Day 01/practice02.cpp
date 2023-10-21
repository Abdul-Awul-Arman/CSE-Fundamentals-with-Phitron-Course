#include<bits/stdc++.h>
using namespace std;
const int N=1000;
vector<int> adjacencyList[N];
int main()
{
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=n;j++)
       {
           int x;
           cin>>x;
           
           if(x==1)
           {
               adjacencyList[i].push_back(j);
           }
       }
    }

    for(int i=1;i<=n;i++)
    {
        cout<<"List of "<<i<<":"<<" ";
        for(int val:adjacencyList[i])
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}