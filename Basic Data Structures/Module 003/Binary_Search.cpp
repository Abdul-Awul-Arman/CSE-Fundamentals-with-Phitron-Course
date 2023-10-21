#include<bits/stdc++.h>
using namespace std;
int main()
{
    int z,x;
    cin>>z>>x;

    int a[z];
    for(int i=0;i<z;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<x;i++)
    {
        int n;
        cin>>n;
        bool flag=true;

        for(int i=0;i<z;i++)
        {
           if(a[i]==n)
           {
                flag=false;
                break;
           }
        }
        if(flag==false)cout<<"found"<<endl;
          else cout<<"not found"<<endl;
    }
    return 0;
}