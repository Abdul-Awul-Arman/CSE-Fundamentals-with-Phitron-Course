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
Node* input(void)
{
    Node* root;
    int val;
    cin>>val;
    queue<Node*> q;
    if(val ==-1) root=NULL;
    else root=new Node(val); 
    if(root !=NULL) q.push(root);
    while(!q.empty())
    {
        Node* f=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* cleft;
        Node* cright;

        if(l==-1)cleft=NULL;
        else cleft=new Node(l);
        
        if(r==-1)cright=NULL;
        else cright=new Node(r);

        f->left=cleft;
        f->right=cright;

        if(f->left !=NULL) q.push(f->left);
        if(f->right !=NULL) q.push(f->right);

    }
    return root;
}
int mn=INT_MAX,mx=INT_MIN;
void maxmin(Node* root)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL)
    {
        mx=max(mx,root->val);
        mn=min(mn,root->val);
    }
    maxmin(root->left);
    maxmin(root->right);
}
int main()
{
    
    Node* root=input();
    maxmin(root);

    cout<<mx<<" "<<mn;
    
    return 0;
}