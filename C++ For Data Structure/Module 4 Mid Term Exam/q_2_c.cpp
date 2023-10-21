#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    public:
    char name[100];
    float height;
    int age;

    Person(char *n,float h,int a)
    {
        strcpy(name,n);
        height=h;
        age=a;
    }
};
int main()
{
    char a[100];   
    char s[100];   
    cin.getline(a,100);
    cin.getline(s,100);
    Person *arman=new Person(a,5.9,21);
    Person *sifat=new Person(s,6,22);

    if(arman->age>sifat->age)
    {
        cout<<arman->name<<endl;
    }
    else
    {
        cout<<sifat->name<<endl;
    }


    return 0;
}