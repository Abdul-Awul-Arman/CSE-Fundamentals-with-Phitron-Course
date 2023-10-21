#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
	char name[100];
	int roll;
	char section;
	int math_marks;
	int cls;

    Student(char *n,int r,char s,int m,int c)
    {
         strcpy(name,n);
         roll=r;
         section=s;
         math_marks=m;
         cls=c;
    }
};
int main()
{
      Student s1("abul",1,'a',10,10);
      Student s2("sifat",3,'c',80,10);
      Student s3("hasan",4,'b',85,10);

      if(s1.math_marks>=s2.math_marks && s1.math_marks>=s3.math_marks)
      {
        cout<<s1.name<<endl;
      }
      else if(s2.math_marks>=s1.math_marks && s2.math_marks>=s3.math_marks)
      {
        cout<<s2.name<<endl;
      }
      else if(s3.math_marks>=s1.math_marks && s3.math_marks>=s2.math_marks)
      {
        cout<<s3.name<<endl;
      }

    
    return 0;
}