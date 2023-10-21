#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;
};
int main()
{
    Student sifat;
    char nn[100]="sifat";
    strcpy(sifat.name,nn);
    sifat.roll=10;
    sifat.section='a';
    sifat.cls=12;

    cout<<"Name"<<" "<<sifat.name<<endl<<"Class"<<" "<<sifat.cls<<endl<<"Roll"<<" "<<sifat.roll<<endl<<"Section"<<sifat.section;

    

    return 0;
}