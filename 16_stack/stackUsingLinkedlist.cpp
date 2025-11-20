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
class Stack
{
    Node *head;
    int capacity;
    int currSize;

public:
// default constructor
    Stack(int c)
    {
        this->capacity = c;
        this->currSize = 0;
        head = NULL;
    }
    //check if empty
    bool isEmpty()
    {
        if (this->head == NULL)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    //check if full
    bool isFull()
    {
        if (this->currSize == this->capacity)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    //push value
    void push(int val)
    {
        //check if max size reach
        if (this->currSize == this->capacity)
        {
            cout<<"Overflow\n";
            return;
        }
        Node *new_node = new Node(val);
        new_node->next = this->head;
        this->head = new_node;
        this->currSize++;
    }
    // stack delete function
    int pop()
    {
        // check if empty or not
        if (this->head == NULL)
        {
            cout << "Underflow\n";
            return INT_MAX;
        }
        // move new head to next 
        Node *new_head = this->head->next;
        this->head->next = NULL;
        // store value to return 
        int result = this->head->val;
        Node* toBeDelete = this->head;
        delete (toBeDelete);
        this->head = new_head;
        return result;
    }
    void getTop()
    {
        if (head == NULL)
        {
            cout << "Underfflow\n";
            return;
        }
        cout << this->head->val << "\n";
    }
    int Size(){
        return this->currSize;
    }
    
};
int main()
{
    // code here
    Stack st(5);
    //push 
    st.push(1);
    st.push(2);
    st.push(3);
    //print 3
    st.getTop();
    //push
    st.push(4);
    st.push(5);
    //print 5
    st.getTop();
    //No
    st.isEmpty();
    // delete 5
    st.pop();
    //print4
    st.getTop();
    return 0;
}