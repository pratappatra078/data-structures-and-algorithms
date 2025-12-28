#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val = data;
        next=NULL;
    }
};
class Linkedlist{
    public:
    Node* head = NULL;
    Linkedlist(){
        head=NULL;
    }
    void inserAtEnd(int data){
        Node* new_node=new Node(data);
        if(head==NULL){
            head=new_node;
            return;
        }
        else{
            Node* temp = head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=new_node;
        }
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<"["<<temp->val<<"]"<<"-";
            temp=temp->next;
        }
        cout<<"[NULL]"<<endl;
    }
};




bool checkPalindrom(Node* head){
    //if empty
    if(!head ) return true;

    //1.find middle 
    Node* fast = head;
    Node* slow = head;
    while(fast and fast->next){
        slow=slow->next;
        fast = fast->next->next;
    }
    //now slow in the middle  

    //2.break linked list into two parts
    Node* prev = slow;
    Node* curr= slow->next;
    slow->next=NULL;

    //3.reveerse the second half
    while(curr){
        Node* next= curr->next;
        curr->next=prev;
        //ahead one step
        prev=curr;
        curr=next;
    }
    
    //4.check two linked list
    Node* head1 = head;
    Node* head2 = prev;
    while(head2){
        if(head1->val != head2->val){
            return false;
        }
        head1=head1->next;
        head2 = head2->next;
    }
    return true;

}

int main(){
    Linkedlist ll;
    ll.inserAtEnd(10);
    ll.inserAtEnd(20);
    ll.inserAtEnd(30);
    ll.inserAtEnd(30);
    ll.inserAtEnd(20);
    ll.inserAtEnd(10);
    ll.display();
    if(checkPalindrom(ll.head))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}