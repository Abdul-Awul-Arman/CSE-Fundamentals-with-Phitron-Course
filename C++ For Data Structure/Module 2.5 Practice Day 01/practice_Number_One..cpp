#include<iostream>
using namespace std;
int* get_array(int x)
{
   int *a=new int[x];

   for(int i=0;i<x;i++)
   {
        cin>>a[i];
   }

   return a;

}

int main()
{   
    int n;
    cin>>n;
    int *x=get_array(n);

    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<" ";
    }
    return 0;
}