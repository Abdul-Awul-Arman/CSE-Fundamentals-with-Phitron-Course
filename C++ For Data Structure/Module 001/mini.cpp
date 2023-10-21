#include<iostream>
// #include<algorithm>
// #include<utility>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    cout<<min(a,b)<<endl;
    cout<<max(a,b);
    swap(a,b);
    cout<<a<<b;
}