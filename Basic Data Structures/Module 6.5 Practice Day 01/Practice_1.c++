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
    cout << "Inserted At Tail" << endl;
}
void printing_linked_count(Node *head)
{
    Node *tmp = head;
    int sum = 0;
    while (tmp != NULL)
    {
        sum++;

        tmp = tmp->nextNode;
    }

    cout << "Link List Count Is: " <<sum<<endl;
}
int main()
{
    Node *head = NULL;

    while (true)
    {
        int op;
        cout << "Option 1: Input Linked List" << endl;
        cin >> op;
        if (op == 1)
        {
            int val;
            cout << "Enter Value" << endl;
            cin >> val;
            if(val==-1) break;
            insert_at_tail(head, val);
        }
    }
    printing_linked_count(head);

    return 0;
}