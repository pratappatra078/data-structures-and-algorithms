// push efficient
#include <bits/stdc++.h>
using namespace std;
class Queue{
    stack<int>st;
public:
    Queue() {}
    void push(int x){
        /*
        Time Complexity: O(1)
        */
        this->st.push(x);
    }
    void pop(){
        /*
        Time Complexity: O(n)
        */
        if(this->st.empty()) return;
        stack<int> temp;
        while (! this->st.size() == 1)
        {
            temp.push(st.top());
            st.pop();
        }
        st.pop();
        while( temp.size()){
            st.push(temp.top());
            temp.pop();
        }
    }
    bool empty(){
        /*
        Time Complexity: O(1)
        */
        return this->st.size ()== 0;
    }
    int front(){
        /*
        Time Complexity: O(n)
        */
        if(st.empty()){
            return -1;
        }
        stack<int> temp;
        while (! this->st.size() == 1)
        {
            temp.push(st.top());
            st.pop();
        }
        int result = st.top();
        while( temp.size()){
            st.push(temp.top());
            temp.pop();
        }
        return result;
    }
};

int main() {
    // internal queue 
    queue<int>qu;
    qu.push(10);// enqueue
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.pop(); // dequeue
    qu.pop();

    while(!qu.empty()){
        cout << qu.front()<<" ";
        qu.pop();
    }
    return 0;
}