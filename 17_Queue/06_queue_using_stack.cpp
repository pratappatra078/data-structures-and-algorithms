//pop efficient
#include<iostream>
#include<stack>
using namespace std;
class Queue{
    stack<int> st;
public:
    Queue() {}
    void push(int x){
        /*
        Time Complexity: O(n)
        */
        if(this->st.empty()){
            this->st.push(x);
            return;
        }
        stack<int> temp;
        while(!this->st.empty()){
            temp.push(this->st.top());
            this->st.pop();
        }
        this->st.push(x);
        while(!temp.empty()){
            this->st.push(temp.top());
            temp.pop();
        }
    }
    void pop(){
        /*
        Time Complexity: O(1)
        */
        if(this->st.empty()){
            return;
        }
        this->st.pop();
    }
    bool empty(){
        return this->st.size()==0;
    }
    int front(){
        /*
        Time Complexity: O(1)
        */
        if(this->st.empty()){
            return -1;
        }
        return this->st.top();
    }
};

int main(){
    Queue qu;
    qu.push(10);// enqueue
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.pop(); // dequeue
    qu.pop();

    while(!qu.empty()){
        cout << qu.front()<<" "; // 30 40 
        qu.pop();
    }
    return 0;
}