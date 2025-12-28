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
    void deleteSameNeighbors(){
        Node* currptr = tail->prev;
        while(currptr->prev!=head){
            Node* nextptr = currptr->next;
            Node* prevptr = currptr->prev;
            if(prevptr->val == nextptr->val){
                prevptr->next = nextptr;
                nextptr->prev=prevptr;
                currptr = prevptr;
            }
            currptr = prevptr;
        }
    }
    
};
// 
bool currNodeisCriticalPoint(Node* &currNode){
    if(currNode->prev->val > currNode->val && currNode->val < currNode->next->val) return true;
    if(currNode->prev->val < currNode->val && currNode->val > currNode->next->val) return true;
    return false;
}

vector<int> distanceBetweenTwoPoint(Node* head,Node* tail){
    vector<int> ans(2,INT_MAX);
    int firstCP = -1,lastCP = -1;
    Node* currNode = tail->prev ;
    // if empty
    if(currNode== NULL){
        ans[0]=ans[1]=-1;
        return ans;
    }

    //
    int currPos = 0;
    while(currNode->prev != NULL){
        if(currNodeisCriticalPoint(currNode)){
            if(firstCP == -1){
                firstCP = lastCP = currPos;
            }
            else{
                ans[0] =min(ans[0],currPos - lastCP); // min distance     
                ans[1] = currPos - firstCP; // max distance 
                lastCP = currPos;
            }

        }
        currPos++;
        currNode = currNode -> prev;
    }

    if (ans[0]==INT_MAX){
        ans[0]=ans[1]= -1;
    }
    return ans;

}
vector<int> findPair(Node* head,Node* tail,int target){
    // assuming that node is not empty 
    Node* firstptr= head;
    Node* lastptr = tail;
    // answer vector 
    vector<int> ans(2,INT_MAX);
    // stop loop when cross one point another
    while(firstptr != lastptr){
        // if sum is equal to target 
        if((firstptr->val + lastptr->val) ==target){
            ans[0] = firstptr->val;
            ans[1]=lastptr->val;
            return ans;
        }
        // when sum is less than target
        else if((firstptr->val + lastptr->val) < target){
            firstptr = firstptr->next;
        }
        // when sum is greater than target
        else{
            lastptr=lastptr->prev;
        }
    }
    // if not found pair 
    if(ans[0]==INT_MAX){
        ans[0]=ans[1]=-1;
    }
    return ans;
}

int main()
{
    DoubleLinkedlist dll;

    dll.insertAtEnd(2);
    dll.insertAtEnd(5);
    dll.insertAtEnd(6);
    dll.insertAtEnd(8);
    dll.insertAtEnd(10);
    dll.insertAtEnd(13);
    dll.insertAtEnd(19);
    dll.insertAtEnd(23);

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

    // (dll.checkPalindrome()) ? cout<<"It is Palindrome " : cout <<"No,Its not palindrome";

    // dll.deleteSameNeighbors();
    // dll.display();

    // vector<int> ans = distanceBetweenTwoPoint(dll.head,dll.tail);
    // cout <<ans[0]<< " "<<ans[1]<<endl;

    vector<int> pair = findPair(dll.head,dll.tail,31);
    cout << pair[0]<<" "<<pair[1]<<endl;

    return 0;
}