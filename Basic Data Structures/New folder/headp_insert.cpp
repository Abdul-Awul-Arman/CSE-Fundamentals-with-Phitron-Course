#include<bits/stdc++.h>
using namespace std;
void Insert(vector<int> &v,int x)
{
        v.push_back(x);
        int cur_idx=v.size()-1;
       
        while(cur_idx !=0)
        {
            int parent_idx=(cur_idx-1)/2;
            if(v[cur_idx]>v[parent_idx])
            {
                swap(v[cur_idx],v[parent_idx]);
                cur_idx=parent_idx;
            }
            else break;
        }
}
int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        Insert(v,x);
    }

    v[0]=v[v.size()-1];
    v.pop_back();
    int cur=0;
   
    while(true)
    {
        int left=(cur*2)+1;
        int right=(cur*2)+2;
        int last=v.size()-1;

        if(left<=last && right<=last)
        {
            if(v[left]>=v[right] && v[left]>v[cur])
            {
                swap(v[left],v[cur]);
                cur=left;
            }
            else if(v[right]>=v[left] & v[right]>v[cur])
            {
                swap(v[right],v[cur]);
                cur=right;
            }
            else
            {
                break;
            }
            
        }
        else if(left<=last)
        {
             if(v[left]>v[cur])
             {
                swap(v[left],v[cur]);
                cur=left;
             }
             else
             {
                break;
             }
        }
        else if(right<=last)
        {
            if(v[right]>v[cur])
            {
                swap(v[right],v[cur]);
                cur=right;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }

    }

    for(int val: v)
    {
        cout<<val<<" ";
    }
    

    return 0;
}