#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int val ;
    Node* next;
    Node(int data){
        val = data;
        next = NULL;
    }
};
class linklist{
public:
    Node* head = NULL;
    linklist(){
        head = NULL;
    }
    void insertTail(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head = new_node;
        }
        else{
            Node* temp = head ;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp ->next = new_node;
        }
    }
    void display(){
        Node* temp = head;
        while(temp!= NULL){
            cout << "[" << temp->val << "]" << "-";
            temp=temp->next;
        }
        cout << "[NULL]";
    }
};

int getLength(Node* head){
    Node* temp = head;
    int count =0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
Node* increaseKsteps(Node* head,int k){
    Node* temp = head;
    while(k--){
        temp = temp->next;
    }
    return temp;

}
Node* findintersect(Node* head1,Node* head2){
    //find the length of nodes
    int first_length = getLength(head1);
    int second_length = getLength(head2);

    // find the k difference between length and increase by k steps
    Node* ptr1, *ptr2;
    if(first_length>second_length){
        int k = first_length-second_length;
        ptr1 = increaseKsteps(head1,k);
        ptr2 = head2;
    }
    else{
        int k = second_length-first_length;
        ptr2 = increaseKsteps(head2,k);
        ptr1 = head1;
    }
    // compare ptr1 and ptr2 and find intersacting point 
    while(ptr1){
        if(ptr1==ptr2){
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return NULL;

}
int main() {
    // first linked list
    linklist ll1;
    ll1.insertTail(10);
    ll1.insertTail(20);
    ll1.insertTail(30);
    ll1.insertTail(40);
    ll1.insertTail(50);
    //10->20->30->40->50

    // second linked list
    linklist ll2;
    ll2.insertTail(60);
    ll2.insertTail(70);
    ll2.insertTail(80);
    ll2.head ->next->next->next = ll1.head->next->next;
    // 60->70->40->50

    Node* insertersactionPoint = findintersect(ll1.head,ll2.head);
    if(insertersactionPoint){
        cout<< "the intersaction point is "<<insertersactionPoint->val;
    }
    else{
        cout<<"No intersaction Point Found.";
    }
    return 0;
}