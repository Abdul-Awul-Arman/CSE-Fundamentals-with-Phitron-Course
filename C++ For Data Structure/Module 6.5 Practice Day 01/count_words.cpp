#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    bool ischar=true;
    int cnt=0;;

    for(char c:s)
    {
        if(isalpha(c))
        {
            if(ischar==true)
            {
                ischar=false; 
                cnt++;
            }
        }
        else
        {
           ischar=true;
        }    
    }

    cout<<cnt<<endl;




    return 0;
}