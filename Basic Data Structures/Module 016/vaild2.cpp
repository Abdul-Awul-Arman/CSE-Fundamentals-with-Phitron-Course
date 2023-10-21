#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        queue<char> q;

        for(int i=0;i<s.size();i++)
        {
             q.push(s[i]);
        }

        int sa=0;
        int sb=0;

        while(!q.empty())
        {
            if(q.front()=='A')
            {
                sa++;
            }
            else
            {
                sb++;
            }
            q.pop();

        }
        
        if(sa !=sb)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}