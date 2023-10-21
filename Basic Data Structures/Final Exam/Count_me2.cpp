#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
           int s;
           cin>>s;
           mp[s]++;
        }
   
        int x=0;
        int c;

        for(auto it=mp.begin();it !=mp.end();it++)
        {
            if(it->second>=x)
            {
                x=it->second;
                c=it->first;
            }
        }

        cout<<c<<" "<<x<<endl;

    }
    return 0;
}