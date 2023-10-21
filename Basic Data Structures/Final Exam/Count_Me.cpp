#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();

    while(n--)
    {
        string s;
        getline(cin,s);
        map<string,int> mp;

        stringstream ss(s);
        string word;

        while(ss>>word)
        {
            mp[word]++;
        }
         
        int x=0;
        string c;

        for(auto it=mp.begin();it !=mp.end();it++)
        {
            if(it->second>=x)
            {
                x=it->second;
                c=it->first;
            }
        }

        stringstream st(s);
        string word2;
        
        map<string,int > mp2;
        while(st>>word2)
        {
            mp2[word2]++;
            if(mp2[word2]==x)
            {
                c=word2;
                break;
            }
        }

        cout<<c<<" "<<mp[c]<<endl;

    }
    return 0;
}