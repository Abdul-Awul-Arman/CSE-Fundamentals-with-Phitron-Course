#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *nextNode;
    Node(int val)
    {
        this->val = val;
        this->nextNode = NULL;
    }
};
void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        cout << "Inserted At Head" << endl;
        return;
    }

    Node *tmp = head;
    while (tmp->nextNode != NULL)
    {
        tmp = tmp->nextNode;
    }
    tmp->nextNode = newNode;
    cout << "Inserted At Tail" <<endl<<endl;
}
void Chack_Dublicate(Node *head)
{
    Node *tmp = head;
    int a[101]={0};
    bool flag = false;
    while (tmp !=NULL)
    {
        a[tmp->val]++;
        tmp = tmp->nextNode;
    }
    for(int i=0;i<101;i++)
    {
        if(a[i]>1)flag=true;
        
    }

    if (flag == true)cout << "YES" << endl;
        
    else cout << "NO" << endl;
        
}
int main()
{
    Node *head = NULL;

    while (true)
    {

        int val;
        cout << "Enter Value" << endl;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, val);
    }
    Chack_Dublicate(head);

    return 0;
}