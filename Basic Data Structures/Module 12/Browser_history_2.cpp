#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<string> web;

    list<char>:: iterator it;

    while(true)
    {
        string val;
        cin>>val;
        if(val=="end")break;
        web.push_back(val);

    }

    for(string val: web)
    {
        cout<<val<<endl;
    }

    // int n;
    // cin>>n;
    // getchar();
    // while(n--)
    // {
    //     list <string>:: iterator cur;
    //     string co;
    //     cin>>co;
    //     if(co=="visit")
    //     {
    //         string ad;
    //         cin>>ad;
    //         list<string>:: iterator it;
    //         for(it=web.begin();it !=web.end();it++)
    //         {
    //             if(*it==ad)
    //             {
    //                 cout<<ad<<endl;
    //                 break;
    //             }
    //         }
            
    //         cur=it;
    //     }
    //     // else if(co=="next")
    //     // {
    //     //     string a=*cur
    //     // }

    // }
    
    return 0;
}