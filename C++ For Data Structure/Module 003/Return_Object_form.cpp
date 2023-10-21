#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    Student(char *n,int r)
    {
        strcpy(name,n);
        roll=r;

    }
};
Student fun()
{
    char as[100]="Arman";
    Student a(as,3);
    return a;
}
int main()
{

    Student kk=fun();

    cout<<kk.name<<endl;
    return 0;
}