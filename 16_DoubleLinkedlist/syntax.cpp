#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int data){
        val = data;
        next = NULL;
        prev = NULL;
    }
};
class DoubleLinkedlist{
public:
    Node* head;
    Node* tail;
    DoubleLinkedlist(){
        head=NULL;
        tail=NULL;
    }
    void insertAthead(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        new_node ->next = head;
        head->prev=new_node;
        head=new_node;
    }
    void insertAtEnd(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head=new_node;
            tail = new_node;
            return;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
    }
    void display(){
        Node* temp = head ;
        if(head==NULL){
            cout << "No Node Exist."<<endl;
            return;
        }
        while(temp!=NULL){
            cout << "["<<temp->val<<"]"<<"-";
            temp=temp->next;
        }
        cout<<"[NULL]"<<endl;
    }
    void insertAtk(int val,int k ){
        if(k==0){
            insertAthead(val);
            return;
        }
        Node* temp = head;
        k--;
        while(k--){
            temp=temp->next;
        }
        Node* new_node = new Node(val);
        new_node->next=temp->next;
        temp->next=new_node;
        new_node->prev=temp;
    }

};
int main()
{
    // code here
    DoubleLinkedlist dll;
    dll.insertAtEnd(10);
    dll.insertAtEnd(20);
    dll.insertAtEnd(30);
    dll.insertAtEnd(40);
    dll.insertAtEnd(50);
    dll.display();
    dll.insertAtk(60,2);
    dll.display();
    return 0;
}