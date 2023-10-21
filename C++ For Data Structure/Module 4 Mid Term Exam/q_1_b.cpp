#include<iostream>
using namespace std;
int main()
{
    int *a=new int[5];
    for(int i=0;i<5;i++)
    {
         cin>>a[i];
    }   

    for(int i=0;i<5;i++)
    {
         cout<<a[i]<<" ";
    } 
    cout<<endl;

    int b[10]={10,20,30,40,50};
    
    int j=5;
    for(int i=0;i<5;i++)
    {
      b[j]=a[i];
      j++;
    }


    delete[] a;

     for(int i=0;i<10;i++)
    {
         cout<<b[i]<<endl;
    } 


    return 0;
}