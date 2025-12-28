//Find the middle element of the Linkedlist.
#include <bits/stdc++.h>
using namespace std;
//Time Complexity :O(n) where n is no of nodes 

// ──────────────────────────────────────────────
// Node Structure
// ──────────────────────────────────────────────
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
// ──────────────────────────────────────────────
// LinkedList Class
// ──────────────────────────────────────────────

class Linkedlist
{
public:
    // head is set as null
    Node *head = NULL;
    Linkedlist()
    {
        head = NULL;
    }
    // function to add element at end
    void insertAtEnd(int val)
    {
        Node *new_node = new Node(val);
        // if head is null then set new_node as head
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        else
        {
            // use node pointer and move it to the end and add new_node
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            // now temp is at the last node
            temp->next = new_node;
        }
    }
    // create a function to display
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << "[" << temp->val<<"]"<<"-";
            temp= temp->next;//increase the pointer 
        }
        cout<<"[NULL]"<<endl;
    }
};
//detect the cycle in linkedlist
bool detectcycle(Node* head){
    if(!head){
        return false;
    }
    Node* fast = head;
    Node* slow = head;
    while(fast and fast->next ){
        fast = fast->next->next;
        slow=slow->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}
//find the middle element
Node* middleElement(Node* head){
    Node* fast = head;
    Node* slow = head;
    while( fast != NULL and fast->next != NULL  ){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
// ──────────────────────────────────────────────
// Detect Cycle in LinkedList using Floyd’s Algorithm
// Fast & Slow Pointer Approach (Tortoise & Hare)
// ──────────────────────────────────────────────
void removeTheCycle(Node* &head){
    Node* fast = head;
    Node* slow = head;
    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);

    fast = head;
    while(slow->next != fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
    
}
int main()
{
    //create a linkedlist object 
    Linkedlist ll;

    //insert vlaue at the linkedlist 
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.insertAtEnd(50);
    ll.insertAtEnd(60);

    //connect the cycle
    ll.head->next->next->next->next->next = ll.head->next->next->next;

    //display the output 
    // ll.display();

    //find the middle element 
    // Node* middle = middleElement(ll.head);
    cout<<"Before removing the circle"<<endl;
    if(detectcycle(ll.head)){
        cout<<"Cycle is exist in the linkedlist"<<endl;
    }
    else{
        cout<<"Cycle not exist."<<endl;
    }
    //remove the circle
    removeTheCycle(ll.head);
    cout<<"After removing the circle"<<endl;

    if(detectcycle(ll.head)){
        cout<<"Cycle is exist in the linkedlist"<<endl;
    }
    else{
        cout<<"Cycle not exist."<<endl;
    }

    //print the middle element 
    // cout<<"The middle Node is "<<middle->val;

    return 0;
}