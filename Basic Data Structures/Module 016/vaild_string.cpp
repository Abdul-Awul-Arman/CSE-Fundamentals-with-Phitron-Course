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

        int sa=0;
        int sb=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
            {
                sa++;
            }
            else
            {
                sb++;
            }

        }
        
        if(sa !=sb)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for (int i=1;i<=s.size();i++)
            {
                if (s[i]=='A')
                {
                    if(s[i-1]=='B')
                    {
                        s.erase(i-1,2);
                    }
                }
                else if(s[i]=='B')
                {
                    if(s[i-1]=='A')
                    {
                        s.erase(i-1,2);
                    }
                }
            }
            cout<<s.empty()<<endl;
            cout<<s<<endl;
        }
    }
    
    return 0;
}