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

class Linkedlist
{
public:
    Node *head;
    Linkedlist()
    {
        head = NULL;
    }
    void insertAtTail(int val)
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
        cout << " [NULL]" << endl;
    }
    void removeDuplicate()
    {
        if (head == NULL)
        {
            return;
        }
        Node *current_node = head;
        while (current_node->next != NULL)
        {
            Node *temp = current_node->next;
            if (current_node->val == temp->val)
            {
                current_node->next = temp->next;
                delete (temp);
            }
            else
            {
                current_node = current_node->next;
            }
        }
    }
};

void insertValue(Linkedlist &ll, int n)
{
    cout << "Enter all values :" << endl;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ll.insertAtTail(x);
    }
}

int main()
{
    Linkedlist ll;
    int n;
    cout << "Enter the number of element : ";
    cin >> n;
    insertValue(ll, n);
    ll.display();
    ll.removeDuplicate();
    ll.display();
    return 0;
}