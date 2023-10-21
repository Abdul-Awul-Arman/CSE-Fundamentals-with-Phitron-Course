#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
          string name;
          int cls;
          char section;
          int id;
};
int main()
{
    int n;
    cin>>n;
    getchar();

    Student a[n];

    for(int i=0;i<n;i++)
    {
         cin>>a[i].name;
         cin>>a[i].cls;
         cin>>a[i].section;
         cin>>a[i].id;
    }



    for(int i=0,j=n-1;i<n;j--,i++)
    {
         cout<<a[i].name<<" ";
         cout<<a[i].cls<<" ";
         cout<<a[i].section<<" ";
         cout<<a[j].id<<" ";
         cout<<endl;
    }


    return 0;
}