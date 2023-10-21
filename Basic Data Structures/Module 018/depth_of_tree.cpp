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
    if(val==-1)root=NULL;
    else root=new Node(val);

    queue<Node*> q;
    if(root !=NULL) q.push(root);

    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* cleft;
        Node* cright;
        if(l==-1)cleft=NULL;
        else cleft=new Node(l);

        if(r==-1)cright=NULL;
        else cright=new Node(r);

        p->left=cleft;
        p->right=cright;

        if(p->right !=NULL) q.push(p->right);
        if(p->left !=NULL)  q.push(p->left);
    }

    return root;
}
int deapth(Node* root)
{
    if(root==NULL) return 0;
    int l=deapth(root->left);
    int r=deapth(root->right);

    return max(l,r)+1;
}
int main()
{

    Node* root=input();
    cout<<deapth(root)<<endl;
    return 0;
}