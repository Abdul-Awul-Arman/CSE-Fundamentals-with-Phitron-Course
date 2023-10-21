#include<iostream>
using namespace std;
int main()
{
    int a,c;
    char s;
    cin>>a>>s>>c;


     if(s=='<')
    {
        if(a<c)
        {
            cout<<"Right";
        }
        else
        {
            cout<<"Wrong";
        } 

    }   
    else if(s=='>')
    {
        if(a>c)
        {
            cout<<"Right";
        }
        else
        {
            cout<<"Wrong";
        }

    }
    else if(s=='=')
    {
        if(a==c)
        {
            cout<<"Right";
        }
        else
        {
            cout<<"Wrong";
        }

    }
    

    
    return 0;
}