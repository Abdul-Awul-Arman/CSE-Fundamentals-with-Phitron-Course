#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v={1,3,4,5,6,2,3,5,3,2};

    replace(v.begin(),v.end()-1,2,100);

    for(int x:v)
    {
        cout<<x<<" ";
    }

    return 0;
}