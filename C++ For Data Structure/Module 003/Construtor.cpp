#include<bits/stdc++.h>
using namespace std;
class Student
{
   public:
   char name[100];
   int roll;
   int cls;
   char section;

   Student(char *n,int r,int c,int s)
   {
        strcpy(name,n);
        roll=r;
        cls=c;
        section=s;
   }
};
int main()
{
    Student arman("arman",4,2,'a');

    cout<<arman.cls;

    return 0;
}