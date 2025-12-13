#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class Queue{
    Node* head ;
    Node* tail ;
    int size =0;
public:
    Queue(){
        this->head = NULL;
        this->tail = NULL;
        this-> size = 0;
    }
    void enqueue(int data){
        Node* newNode = new Node(data);
        if(this->head == NULL){
            this->head = this->tail= newNode;
        }
        else{
            this->tail->next = newNode;
            this->tail = newNode;
        }
        this->size++;
    }
    void dequeue(){
        if(this->head==NULL){
            // LL is empty
            return;
        }
        else{
            Node* oldHead = this->head;
            this-> head = this->head->next;
            oldHead->next =NULL;
            delete oldHead;
        }
        this->size--;
    }
    int getSize(){
        return this->size;
    }

    bool isEmpty(){
        return this->head == NULL;
    }
    int front(){
        if(head==NULL){
            return -1;
        }
        return this->head->data;
    }
};
int main() {
    Queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.enqueue(40);
    qu.dequeue();
    cout << "The size of the queue is "<<qu.getSize()<<endl;;
    // cout<< "The queue is empty ? "<< qu.isEmpty();

    while(!qu.isEmpty()){
        cout<<qu.front()<<" ";
        qu.dequeue();
    }
    return 0;
}