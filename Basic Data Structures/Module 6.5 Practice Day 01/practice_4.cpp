#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *nextNode;

    Node(int val)
    {
        (*this).val = val;
        (*this).nextNode = NULL;
    }
};
void inser_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->nextNode = head;
    head = newNode;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->nextNode = newNode;
    tail = newNode;
}
void insert_at_any_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->nextNode;
        if (tmp == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }
    }
    newNode->nextNode = tmp->nextNode;
    tmp->nextNode = newNode;
}
void printing_linked_list(Node *head)
{
    // cout<<endl<<"Linked List Printed Below"<<endl;
    // int i=0;
    while (head != NULL)
    {
        cout << head->val<<" ";
        head = head->nextNode;
        // i++;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {

        int val;
        // cout<<endl<<"Give Value Here"<<endl;
        cin >> val;
        if (val == -1)
            break;
        else
            insert_at_tail(head, tail, val);
    }

    int q;
    cin >> q;
    int i = 0;
    while (i < q)
    {
        int pos, val;
        // cout<<"Enter Position"<<endl;
        cin >> pos;
        // cout<<"Enter Value"<<endl;
        cin >> val;
        if (pos == 0)
            inser_at_head(head, val);
        else
            insert_at_any_position(head, pos, val);

        printing_linked_list(head);
        cout<<endl;
        i++;
    }
    

    return 0;
}