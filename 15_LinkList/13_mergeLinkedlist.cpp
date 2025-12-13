#include <bits/stdc++.h>
using namespace std;
//node class
class Node{
public:
    int val;
    Node* next ;
    Node(int data){
        val = data;
        next = NULL;
    }
};
// linkedlist class
class Linkedlist{
public:
    Node* head = NULL;

    //define head as NULL
    Linkedlist(){
        head = NULL;
    }
    // insert at tail
    void insertAttail(int val){
        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
        }
        else{
            Node* temp = head;
            while(temp->next!= NULL){
                temp=temp->next;
            }
            temp->next=new_node;
        }
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout << "["<<temp->val<<"]"<<"-";
            temp=temp->next;
        }
        cout<<"[NULL]"<<endl;

    }
};



int main() {
    // code here
    Linkedlist ll;
    ll.insertAttail(1);
    ll.insertAttail(3);
    ll.insertAttail(3);
    ll.insertAttail(4);
    ll.insertAttail(5);
    ll.display();
    return 0;
}