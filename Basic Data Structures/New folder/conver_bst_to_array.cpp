#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
          int val;
          Node* left;
          Node* right;
     Node(int val)
     {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
     }
};
Node* convert(int a[],int n,int l,int r)
{
   if(l>r) return NULL;
   int mid=(l+r)/2;
   Node* root=new Node(a[mid]);
   Node* LeftRoot=convert(a,n,l,mid-1);
   Node*  RightRoot=convert(a,n,mid+1,r);

   root->left=LeftRoot;
   root->right=RightRoot;
   return root;
}
void print(Node* root)
{
    if(root==NULL) return;
    cout<<root->val<<" ";
    print(root->left);
    print(root->right);
       
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    Node* r=convert(a,n,0,n-1);
    print(r);
    return 0;
}