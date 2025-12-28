//pop efficient
#include <iostream>
#include <queue>

using namespace std;
class Stack{
    queue<int> qu;
public:
    Stack() {}
    void push(int x){
        /*
        Time Complexity: O(n)
        */
        if(this->qu.empty()){
            qu.push(x);
            return;
        }
        queue<int> temp;
        while( this->qu.size()>0){
            temp.push(this->qu.front());
            this->qu.pop();
        }
        this->qu.push(x);
        while(not temp.empty()){
            this->qu.push(temp.front());
            temp.pop();
        }
    }
    void pop(){
        /*
        Time Complexity: O(1)
        */
        if(this->qu.empty()){
            return;
        }
        qu.pop();
    }
    bool empty(){
        return this->qu.size() == 0;
    }
    int top(){
        /*
        Time Complexity: O(1)
        */
        if(this->qu.empty()){
            return -1;
        }
        return qu.front();
    }
};
int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.pop();

    while(!st.empty()){
        cout<<st.top()<<" "; // 20 10
        st.pop();
    }
    return 0;
}