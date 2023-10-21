#include<bits/stdc++.h>
using namespace std;
class CstomSort
{
    public:
          char c;
          int  cnt;
};
bool cmp(CstomSort a,CstomSort b)
{
    if(a.cnt>b.cnt)return true;
    else return false;
}
int main()
{
    CstomSort a[26];
    int n;
    cin>>n;

    for(int i='a';i<='z';i++)
    {
        a[i-'a'].c=i;
        a[i-'a'].cnt=0;
    }


    for(int i=0;i<n;i++)
    {
        char s;
        cin>>s;
        a[s-'a'].cnt++;
    }

    sort(a,a+n,cmp);



    for(int i='a';i<='z';i++)
    {
        if(a[i-'a'].cnt>0)
        {
            for(int j=0;j<a[i-'a'].cnt;j++)
            {
                cout<<a[i-'a'].c;
            }
        }
    }
    
    return 0;
}