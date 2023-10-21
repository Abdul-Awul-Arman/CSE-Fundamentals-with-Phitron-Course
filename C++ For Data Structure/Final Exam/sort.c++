#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
           string name;
           int cls;
           char section;
           int id;
           int math;
           int english;

           int total(void)
           {
                int totalmarks=math+english;
                return totalmarks;
           }

};
bool cmp(Student a,Student b)
{
    if(a.total() > b.total())return true;
    else if(a.total() == b.total())
    {
         if(a.id < b.id) return true;
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
        cin>>a[i].name;
        cin>>a[i].cls;
        cin>>a[i].section;
        cin>>a[i].id;
        cin>>a[i].math;
        cin>>a[i].english;
    }

    sort(a,a+n,cmp);

     for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" ";
        cout<<a[i].cls<<" ";
        cout<<a[i].section<<" ";
        cout<<a[i].id<<" ";
        cout<<a[i].math<<" ";
        cout<<a[i].english<<" ";
        // cout<<a[i].total();
        cout<<endl;
    }




    return 0;
}