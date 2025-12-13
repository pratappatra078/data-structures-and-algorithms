#include <bits/stdc++.h>
using namespace std;

// create node class
class Node{
public:
    int val;
    Node* next;
    Node(int data){
        val = data ;
        next = NULL;
    }
};

//create linked list class
class Linkedlist{
public:
    Node* head = NULL;
    // initialise head as NULL
    Linkedlist(){
        head = NULL;
    }
    //new node add
    void insertAttail(int val){
        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            return;
        }
        Node* temp = head;
        while(temp->next!= NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void display(){
        Node* temp = head;
        while(temp!= NULL){
            cout << "["<<temp->val<<"]"<<"-";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

};

//calculate length
int lengthcal(Node* head){
    Node* temp = head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void removeKthelement(Node* &head,int k){
    // calculate the length of the linkedlist
    int length = lengthcal(head);
    k = length - k -1;
    // remove kth element
    Node* temp = head;
    while (k--){
        temp = temp->next;
    }
    Node* del = temp->next;
    temp->next = del->next;
    delete(del);
}
// main function

//using two pointer 
void removek(Node* &head,int k){
    // declear two pointer
    Node* ptr1 = head;
    Node* ptr2 = head;
    // set pointer at k step ahead
    while(k--){
        ptr2 = ptr2->next;
    }
    // if k == length of node
    if(ptr2==NULL){
        Node* temp = head;
        head=head->next;
        delete(temp);
        return;
    }
    // traverse
    while(ptr2->next!=NULL){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    Node* del = ptr1->next;
    ptr1->next=del->next;
    delete(del);
}

int main() {
    //create new linked list
    Linkedlist ll;
    for(int i=1;i<=15;i++){
        ll.insertAttail(i);
    }
    // display the linkedlist
    ll.display();
    // delete 3th node = delete 40
    // removeKthelement(ll.head,3);
    removek(ll.head,15);
    ll.display();
    return 0;
}