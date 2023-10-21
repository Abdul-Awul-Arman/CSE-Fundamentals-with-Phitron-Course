#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[26] = {0}, n;
    char c;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>c;
        a[c-'a']++;
    }
    for(int i = 0; i < 26; i++)
    {
        if(a[i] > 0)
        {
            int j = a[i];
            c = 'a'+i;
            for(j; j > 0; j--){
                cout<<c;
            }
        }
    }
    
    return 0;
}