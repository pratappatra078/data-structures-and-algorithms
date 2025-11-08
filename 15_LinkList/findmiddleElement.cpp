#include <bits/stdc++.h>
using namespace std;
// create a class to define a node structure
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
// linkedlist class created
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

Node* middleElement(Node* head){
    Node* fast = head;
    Node* slow = head;
    while( fast != NULL and fast->next != NULL  ){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
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

    //display the output 
    ll.display();

    //find the middle element 
    Node* middle = middleElement(ll.head);
    
    //print the middle element 
    cout<<middle->val;
    return 0;
}