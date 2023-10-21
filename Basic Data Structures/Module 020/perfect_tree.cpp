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
int print(Node* root)
{
    queue<pair<Node*,int>> q;
    if(root!=NULL)q.push({root,0});
    int sum=0;
    while(!q.empty())
    {
        pair<Node*,int> f=q.front();
        q.pop();
        Node* node=f.first;
        int level=f.second;

       sum++;

        if(node->left)q.push({node->left,level+1});
        if(node->right)q.push({node->right,level+1});
    }
    return sum;
}
int hig(Node* root)
{
    if(root==NULL)return 0;
    int l=hig(root->left);
    int r=hig(root->right);

    return max(l,r)+1;
}
int main()
{
    Node* root=input();
    int sum=print(root);
    int hight=hig(root);

    if(sum==pow(2,hight)-1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}