#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

class linklist
{
public:
    Node *head;
    linklist()
    {
        head = NULL;
    }
    void insertTail(int val)
    {
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << "[" << temp->val << "]" << "-";
            temp = temp->next;
        }
        cout << " NULL";
    }
};

bool checkIfSame(Node *head1, Node *head2)
{
    Node *ptr1 = head1;
    Node *ptr2 = head2;
    while (ptr1 != NULL and ptr2 != NULL)
    {
        if (ptr1->val != ptr2->val)
            return false;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return (ptr1 == NULL and ptr2 == NULL);
}

int main()
{
    linklist ll;
    ll.insertTail(10);
    ll.insertTail(20);
    ll.insertTail(30);
    ll.insertTail(40);

    linklist ll2;
    ll2.insertTail(10);
    ll2.insertTail(20);
    ll2.insertTail(30);

    ll.display();
    cout << endl;
    ll2.display();
    cout << endl;

    if (checkIfSame(ll.head, ll2.head))
    {
        cout << "Two nodes are same . " << endl;
    }
    else
    {
        cout << "Two nodes are not same ." << endl;
    }
    return 0;
}