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

void insertAtHead(Node* &head ,int val){
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}
void insertAtTail(Node* head , int val ){
    Node* temp = head ;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    Node* new_node = new Node(val);
    temp->next=new_node;
}
void insertAtPos(Node* &head,int val, int position){
    if(position ==0){
        insertAtHead(head, val);
    }
    else{
        Node* new_node = new Node(val);
        Node* temp = head ;
        int current_position = 0 ;
        while(current_position!= position-1){
            temp = temp->next;
            current_position++;
        }
        new_node->next = temp->next;
        temp->next=new_node;
    }
}

void updatekthePosition(Node* head, int value ,int position){
    Node* temp = head ;
    int current_position = 0;
    while(current_position != position-1){
        temp = temp->next;
        current_position++;
    }
    temp->val=value;
}
void deleteAtFirst(Node* &head ){
    Node* temp = head ;
    head = head ->next;
    free(temp);
}
void deleteAtkthPosition(Node* head,int position){
    if(position == 0){//if the position is first node then call the deleteAtFirst function to delete 
        deleteAtFirst(head);
        return;
    }
    Node* temp = head ; // create a temp node to travarse into the link list
    int current_position = 0;
    while(current_position != position-1){
        temp = temp->next;
        current_position++;
    }
    //now temp is in the position - 1 
    Node* del = temp->next; // store this node location which need to delete 
    temp ->next = temp ->next->next; // set the location to the next node 
    free(del);// delete the node 
}
void deleteAtend(Node* head){
    Node* temp = head;
    while(temp ->next->next != NULL){
        temp = temp-> next ;
    }
    free(temp->next);
    temp->next=NULL;
}
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL) {
        cout<<"["<<temp->val<<"]"<<"-";
        temp=temp->next;
    }
    cout<<" [Null]";
}
int main()
{
    Node* head =NULL;
    insertAtHead(head,5);

    insertAtHead(head, 15);
    insertAtHead(head, 20);
    insertAtHead(head, 25);
    insertAtTail(head,9);
    insertAtTail(head,12);
    insertAtPos(head,50,2);
    display(head);
    cout<<"\n";
    updatekthePosition(head,90,2);
    display(head);
    cout<<"\n";
    deleteAtFirst(head);
    display(head);
    cout<<endl;
    deleteAtend(head);
    display(head);
    cout<<endl;
    deleteAtkthPosition(head,2);
    display(head);
    return 0;
}