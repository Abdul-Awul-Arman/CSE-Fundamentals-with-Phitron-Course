#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
           string name;
           int roll;
           int marks;
};
bool cmp(Student a,Student b)
{
    if(a.marks>b.marks)return true;
    else if(a.marks==b.marks)
    {
        if(a.roll < b.roll)return true;
        else return false;
    }
    else return false;
}
int main()
{
    int n;
    cin>>n;
    getchar();
    Student a[n];

    for(int i=0;i<n;i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
        getchar();
        
    }

    sort(a,a+n,cmp);

    for(int i=0;i<n;i++)
    {
       cout<<a[i].name<<" ";
       cout<<a[i].roll<<" ";
       cout<<a[i].marks<<" ";
       cout<<endl;
    }


    return 0;
}