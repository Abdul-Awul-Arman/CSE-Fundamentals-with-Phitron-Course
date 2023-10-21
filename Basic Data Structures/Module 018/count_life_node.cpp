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
Node* input()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    queue<Node*> q;
    if(root !=NULL) q.push(root);
    while(!q.empty())
    {
        Node* parent=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* cleft;
        Node* cright;

        if(l==-1)cleft=NULL;
        else cleft=new Node(l);
        if(r==-1)cright=NULL;
        else cright=new Node(r);

        parent->left=cleft;
        parent->right=cright;

        if(parent->left !=NULL) q.push(parent->left);
        if(parent->right !=NULL) q.push(parent->right);

    }

    return root;
}
int LefeNodeConunt(Node* root)
{
   if(root==NULL) return 0;
   if(root->left ==NULL && root->right==NULL)
   {
        return 1;
   }
   else
   {
       int l=LefeNodeConunt(root->left);
       int r=LefeNodeConunt(root->right);
       return l+r;
   }
}
int main()
{
    Node* root=input();
    cout<<LefeNodeConunt(root);
    
    return 0;
}