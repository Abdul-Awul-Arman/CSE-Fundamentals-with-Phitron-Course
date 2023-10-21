#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sentence;
    getline(cin,sentence);

    string word;
    stringstream ss(sentence);

    map<string,int> mp;

    while(ss>>word)
    {
       mp[word]++;
    }

    map<string,int>:: iterator it;

    // for(it=mp.begin();it!=mp.end();it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    cout<<mp["i"]<<endl;
    return 0;
}