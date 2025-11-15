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
        k=k-2;
        while(k--){
            temp=temp->next;
        }
        Node* new_node = new Node(val);
        new_node->next=temp->next;
        temp->next=new_node;
        new_node->prev=temp;
        new_node->next->prev=new_node;
    }
    void deleteAtk(int k){
        //create new node
        Node* temp = head;
        k=k-2;
        while(k--){
            temp=temp->next;
        }

        // this node i have to delete
        Node* del= temp->next;

        //set to next node
        temp->next=del->next;
        del->next->prev=NULL;

        //set null to the del node
        del->next=NULL;
        del->prev=NULL;
        delete(del);
    }
    void reverseDll(){
        Node* currptr = head;
        while(currptr){
            Node* nextptr = currptr->next;
            currptr->next = currptr->prev;
            currptr->prev = nextptr;
            currptr=nextptr;
        }
        // swap head and tail
        Node* new_head= tail;
        tail=head;
        head=new_head;
    }
    bool checkPalindrome(){
        Node* left = head;
        Node* right = tail;
        while(left != right && left->prev != right){
            if(left->val != right->val){
                return false;
            }
            left = left->next;
            right = right->prev;
        }
        return true;
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
    dll.insertAtEnd(40);
    dll.insertAtEnd(30);
    dll.insertAtEnd(20);
    dll.insertAtEnd(10);
    dll.display();

    // insert 60 at 2nd position
    // dll.insertAtk(60,2);
    // dll.display();

    // // delete 60 
    // dll.deleteAtk(2);
    // dll.display();

    //reverse linkedlist
    // dll.reverseDll();
    // dll.display();

    (dll.checkPalindrome()) ? cout<<"It is Palindrome " : cout <<"No,Its not palindrome";
    return 0;
}