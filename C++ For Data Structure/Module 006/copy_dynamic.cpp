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
    Person *arman=new Person("arman",21);
    Person *sifat=new Person("sifat",20);

    // arman=sifat;
    // (*arman).name=(*sifat).name; ->hard
    // (*arman).age=(*sifat).age;

    *arman=*sifat;
    delete sifat;

    cout<<(*arman).name<<" "<<(*arman).age<<endl;
    
    return 0;
}