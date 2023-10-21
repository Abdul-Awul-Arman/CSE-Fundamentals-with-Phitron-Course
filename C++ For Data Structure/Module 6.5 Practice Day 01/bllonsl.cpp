#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;

  for(int i=0;i<t;i++)
  {
      int n;
    cin>>n;
    char a[n];
    cin>>a;

    int sum=0;
    int cnt[26]={0};
    for(int i=0;i<n;i++)
    {
        if(cnt[a[i]-65]==0)
        {
            sum+=2;
            cnt[a[i]-65]++;
        }
        else
        {
            sum+=1;
        }

    }
    cout<<sum<<endl;
  }






    return 0;
}