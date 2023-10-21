#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
          string name;
          int roll;
          int marks;
};
int main()
{
    Student a[3];

    for(int i=0;i<3;i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].roll;
        cin>>a[i].marks;
        getchar();
    }
    
    Student max;
   max.marks=INT_MIN;

    for(int i=0;i<3;i++)
    {
       if(a[i].marks>max.marks)
       {
            max=a[i];
       }
    }

        cout<<max.marks;
    

    
    return 0;
}