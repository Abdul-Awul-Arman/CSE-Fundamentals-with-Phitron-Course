#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    queue<string> q;

    while(n--)
    {
        int x;
        cin>>x;
        if(x==0)
        {
            string s;
            cin>>s;
            q.push(s);
        }
        else
        {
            if(!q.empty())
            {
                cout<<q.front()<<endl;
                q.pop();
            }
            else
            {
                cout<<"Invalid"<<endl;
            }
            
            
        }
    }
    return 0;
}