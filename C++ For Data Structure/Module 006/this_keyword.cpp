#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
           string name;
           int age;

           Person(string name,int age)
           { 
               (*this).name=name;
               (*this).age=age;
           }
};
int main()
{
    Person a("Arman",21);

    cout<<a.name<<" "<<a.age<<endl;
    
    return 0;
}