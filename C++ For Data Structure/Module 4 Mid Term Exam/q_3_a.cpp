#include<bits/stdc++.h>
using namespace std;
class As
{
    public:
    char name[100];
    int age;

};
As ans()
{
    As r;
    r.age=10;
    char a[100]="for";
    strcpy(r.name,a);
    return r;
}
int main()
{
    As ar=ans();

    cout<<ar.name<<endl<<ar.age;
     
    return 0;
}