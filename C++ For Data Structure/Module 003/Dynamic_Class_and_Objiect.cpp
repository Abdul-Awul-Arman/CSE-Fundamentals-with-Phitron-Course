#include<bits/stdc++.h>
using namespace std;
class My
{
    public:
    char Name[100];
    int Phone_NO;

    My(char *n,int p)
    {
        strcpy(Name,n);
        Phone_NO=p;

    }
};
int main()
{
     char a[100];
    cin.getline(a,100);
    int n;
    cin>>n;
    My *arman=new My(a,n);
    
    cout<<arman->Name<<endl;
    cout<<arman->Phone_NO<<endl;
    // strcpy(arman->Name,a);

    // cout<<(*arman).Name;
    
    return 0;
}
