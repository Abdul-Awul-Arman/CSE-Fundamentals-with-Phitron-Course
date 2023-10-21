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
int count(Node* root)
{
     if(root==NULL) return 0;

     int l=count(root->left);
     int r=count(root->right);
     return l+r+1;
}
Node* input()
{
    Node* root;
    int val;
    cin>>val;
    if(val==-1)root=NULL;
    else root=new Node(val);
    queue<Node*> q;
    if(root !=NULL) q.push(root);

    while (!q.empty())
    {
        Node* p=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* cleft;
        Node*  cright;
        if(l==-1)cleft=NULL;
        else cleft=new Node(l);
        if(r==-1)cright=NULL;
        else cright=new Node(r);

        p->left=cleft;
        p->right=cright;

        if(p->left !=NULL) q.push(p->left);
        if(p->right !=NULL) q.push(p->right);

    }
    
    return root;

}
int main()
{
    Node* root=input();

    int con=count(root);

    cout<<con<<endl;
    
    return 0;
}