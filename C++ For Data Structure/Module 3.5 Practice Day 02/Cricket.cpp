#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
	int jersey_no;
	char country[100];
};
int main()
{
    Cricketer *dhoni=new Cricketer;
    dhoni->jersey_no=20;
    char a[100]="India";
    strcpy(dhoni->country,a);

    Cricketer *kholie=new Cricketer;

    // strcpy(kholie->country,dhoni->country);
    // kholie->jersey_no=dhoni->jersey_no;
    *kholie=*dhoni;

    delete dhoni;

    cout<<kholie->jersey_no<<endl;
    cout<<kholie->country<<endl;
    cout<<dhoni->country<<endl;
    cout<<dhoni->jersey_no<<endl;


    return 0;
}