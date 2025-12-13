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
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << "[" << temp->val << "]" << "-";
            temp = temp->next;
        }
        cout << " NULL"<<endl;
    }
    void insertAtend(int val)
    {
        // create a new node
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        // traverse though the linklist
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        // set new node at end
        temp->next = new_node;
    }
};
void deleteAlternatives(Node* head){
    Node* current_node = head;
    while(current_node != NULL and current_node ->next != NULL){
        Node* temp = current_node ->next; // temp node for identify the next element
        current_node ->next = temp->next;
        free(temp);
        current_node = current_node->next ;
    }
}
void duplicates(Node* head){
    // create a pointer to identify the top position
    Node* current_node = head;
    while(current_node != NULL and current_node->next != NULL){
        //if next value is same with current 
        if(current_node->val == current_node->next->val){
            Node* temp = current_node->next;
            current_node->next = temp->next;
            delete(temp);
        }
        else{
            // when next value is different 
            current_node = current_node->next;
        }
    }
}
int main()
{
    Linkedlist ll;
    ll.insertAtend(1);
    ll.insertAtend(2);
    ll.insertAtend(2);
    ll.insertAtend(2);
    ll.insertAtend(5);
    ll.display();
    // deleteAlternatives(ll.head);
    duplicates(ll.head);
    ll.display();

    return 0;
}