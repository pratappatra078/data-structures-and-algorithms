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
    void insertAttail(int val)
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
        Node *tem = head;
        while (tem != NULL)
        {
            cout << "[" << tem->val << "]" << " -> ";
            tem = tem->next;
        }
        cout << " [NULL]" << endl;
    }
};
void displayReverse(Node *node)
{
    // base case
    if (node == NULL)
    {
        cout << "[NULL]" << "-";
        return;
    }
    // recursive call
    displayReverse(node->next);
    cout << "[" << node->val << "]" << "-";
}

Node *reverseList(Node *&head)
{
    // define 3 pointer
    Node *prev = NULL;
    Node *curr = head;

    // traverse the linklist
    while (curr != NULL)
    {
        Node *nextptr = curr->next;
        curr->next = prev;
        // move all pointer
        prev = curr;
        curr = nextptr;
    }
    // after end curr-> next will point to NULL and prev will point to last Node
    Node *new_head = prev;
    return new_head;
}
Node *reverseListRecursion(Node *&head)
{
    // base case
    if (head->next == NULL || head == NULL)
    {
        return head;
    }
    // this will return the last node 
    Node *new_head = reverseListRecursion(head->next);
    head->next->next = head;
    head->next = NULL;
    return new_head;
}

Node* reverseLL(Node* head,int k){
    Node* prevptr = NULL;
    Node* currptr = head;
    
    int count=0;//for counting the first k nodes
    // reversing first k nodes
    while(currptr != NULL && count<k){
        Node* nextptr = currptr ->next;
        currptr->next=prevptr;
        //now forward all pointer by onestep
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }

    // currptr will give us (k+1)th node
    if(currptr != NULL){
        Node* new_head = reverseLL(currptr,2);
        head->next = new_head;
    }

    return prevptr;
}

int main()
{
    Linkedlist ll;
    ll.insertAttail(1);
    ll.insertAttail(2);
    ll.insertAttail(3);
    ll.insertAttail(4);
    ll.insertAttail(5);
    ll.insertAttail(6);
    ll.insertAttail(7);
    ll.insertAttail(8);
    ll.display();
    // displayReverse(ll.head);
    ll.head = reverseLL(ll.head,2);
    ll.display();
    return 0;
}