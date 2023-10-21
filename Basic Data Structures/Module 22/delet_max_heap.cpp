#include<bits/stdc++.h>
using namespace std;
void input(vector<int> &v,int x)
{
    v.push_back(x);
    int cur_ind=v.size()-1;

    while(cur_ind !=0)
    {
        int parent_ind=(cur_ind-1)/2;

        if(v[parent_ind]<v[cur_ind])
        {
            swap(v[parent_ind],v[cur_ind]);
        }
        else
        {
            break;
        }
        cur_ind=parent_ind;
    }
}
void delete_heap(vector<int> &v)
{
    v[0]=v[v.size()-1];
    v.pop_back();
    int cur=0;

    while(true)
    {
        int left=cur*2+1;
        int right=cur*2+2;
        int last=v.size();

        if(left<=last && right<=last)
        {
            if(v[left] > v[right] && v[cur] < v[left])
            {
                swap(v[left],v[cur]);
                cur=left;
            }
            else if(v[right]>v[left] && v[cur]<v[right] )
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
            if(v[cur]<v[left])
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
            if(v[cur]<v[right])
            {
                swap(v[cur],v[right]);
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

}
void print(vector<int> v)
{
    for(int val: v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
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
        input(v,x);
    }

    print(v);
    delete_heap(v);
    print(v);
    
    return 0;
}