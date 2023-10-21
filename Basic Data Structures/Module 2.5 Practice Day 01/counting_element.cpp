#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    vector<int>:: iterator it;

    int sum=0;

    for(int i=0;i<n;i++)
    {
        int x=a[i]+1;
        it=find(a.begin(),a.end(),x);

        if(it != a.end())sum++;
    }
    cout<<sum<<endl;
    return 0;
}