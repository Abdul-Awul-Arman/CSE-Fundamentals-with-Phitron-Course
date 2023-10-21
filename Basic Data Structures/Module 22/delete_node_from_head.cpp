#define el cout<<endl;
#include<bits/stdc++.h>
using namespace std;
void input(vector<int> &v,int x)
{
        v.push_back(x);
        int cur_ind=v.size()-1;
        while(cur_ind !=0)
        {
            int parent_ind=(cur_ind-1)/2;

            if(v[parent_ind] > v[cur_ind])
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
void print(vector<int> v)
{
    for(int val: v)
    {
        cout<<val<<" ";
    }
}
void delete_heap(vector<int> &v)
{
    v[0]=v[v.size()-1];
    v.pop_back();
    int cur_ind=0;
    while(true)
    {
        int left_ind=(cur_ind*2)+1;
        int right_ind=(cur_ind*2)+2;
        int last_ind=v.size()-1;

        if(left_ind<=last_ind && right_ind<= last_ind)
        {
             if(v[left_ind] <= v[right_ind] && v[left_ind] < v[cur_ind])
             {
                swap(v[left_ind],v[cur_ind]);
                cur_ind=left_ind;
             }
             else if(v[right_ind]<= v[left_ind] && v[right_ind]<v[cur_ind])
             {
                swap(v[right_ind],v[cur_ind]);
                cur_ind=right_ind;
             }
        }
        else if(left_ind <=last_ind)
        {
            if(v[left_ind]<v[cur_ind])
            {
                swap(v[left_ind],v[cur_ind]);
                cur_ind=left_ind;
            }
            else
            {
                break;
            }
        }
        else if(right_ind <= last_ind)
        {
            if(v[right_ind]<v[cur_ind])
            {
                swap(v[right_ind],v[cur_ind]);
                cur_ind=right_ind;
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
    el;
    delete_heap(v);
    print(v);
    el;
    delete_heap(v);
    print(v);
    
    return 0;
}