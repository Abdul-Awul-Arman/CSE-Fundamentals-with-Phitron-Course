#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;

        set<int,greater<>> st;
        for(int i=0;i<x;i++)
        {
            int y;
            cin>>y;
            st.insert(y);
        }

        for(int val:st)
        {
            cout<<val<<" ";
        }
        cout<<endl;

    }
    return 0;
}