#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
           string name,school;
           int age,roll,cls,Bangla,english,Math;
           
           Student(string n,string s,int r,int a,int c,int b,int e,int m)
           {
                name=n;
                school=s;
                age=a;
                roll=r;
                cls=c;
                Bangla=b;
                english=e;
                Math=m;
           }
           void result()
           {
                cout<<"Name :"<<name<<endl;
                cout<<"School :"<<school<<endl;
                cout<<"Roll :"<<roll<<endl;
                cout<<"Class :"<<cls<<endl;
                cout<<"Age :"<<age<<endl;
                cout<<"Bangla ="<<" "<<Bangla<<endl;
                cout<<"English ="<<" "<<english<<endl;
                cout<<"Math ="<<" "<<Math<<endl;
                cout<<"Total Marks ="<<" "<<Bangla+english+Math<<endl;



           }
};
int main()
{
    Student Aramn("Arman","Modle hig school",1,21,12,80,90,70);
    Aramn.result();
    
    return 0;
}