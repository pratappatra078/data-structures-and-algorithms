#include <bits/stdc++.h>
using namespace std;
// define the node plate
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
// define circular linkedlist structure
class CircularLinkedlist
{
public:
    Node *head;
    CircularLinkedlist()
    {
        head = NULL;
    }
    // insert node at begining
    void insert_Node_At_Begining(int val)
    {
        // create a new node
        Node *new_node = new Node(val);

        // check if list is empty
        if (head == NULL)
        {
            head = new_node;
            new_node->next = head;
            return;
        }

        // when linkedlist is not empty
        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }
        // now tail is at end position
        new_node->next = head;
        tail->next = new_node;
        head = new_node;
    }
    void insert_At_end(int val){
        Node* new_node = new Node(val);
        // if no node is exist
        if(head==NULL){
            head = new_node;
            new_node ->next = new_node;
            return;
        }
        //if node exist 
        Node* tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }
        // now tail is in the last position 
        tail->next = new_node;
        new_node->next =head;
    }
    void delete_at_begin(){
        Node* temp = head;
        //check if list is empty
        if(head==NULL){
            return;
        }
        //in the case list is not empty 
        Node* tail = head;
        while(tail->next!= head){
            tail = tail->next;
        }
        // now tail is in the last of the list
        head = head-> next;
        tail->next = head;
        delete(temp);
    }
    void delete_at_end (){
        if(head==NULL){
            return;
        }
        //if not empty
        Node* tail = head;
        while(tail->next->next!=head){
            tail=tail->next;
        }
        //now tail is in the second last node 
        Node* temp = tail->next;
        tail->next = head;
        delete(temp);
    }
    //check circular .
    void checkCircular(){
        Node* temp = head;
        //print first 15 
        for(int i=0 ; i<15;i++){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
    }
    // display function
    void display()
    {
        Node *temp = head;
        do
        {
            cout << temp->val << "->";
            temp = temp->next;
        } while (temp != head);
        cout <<endl;
    }
};
int main()
{
    // create a linkedlist
    CircularLinkedlist cll;
    cll.insert_At_end(10);
    cll.insert_At_end(20);
    cll.insert_At_end(30);
    cll.insert_At_end(40);

    // display
    cll.display();
    
    //delete from first
    cll.delete_at_begin();
    cll.display();

    //delete at end 
    cll.delete_at_end();
    cll.display();



    //check circular 
    // cll.checkCircular();
    return 0;
}