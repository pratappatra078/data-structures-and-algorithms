//push efficient
#include <iostream>
#include <queue>
using namespace std;
class Stack{
    queue<int> qu;
public:
    Stack() {}
    void push(int x){
        /*
        Time Complexity: O(1)
        */
        this->qu.push(x);
    }
    void pop(){
        /*
        Time Complexity: O(n)
        */
        if(this->qu.empty()){
            return;
        }
        queue<int> temp;
        while( this->qu.size()>1){
            temp.push(this->qu.front());
            this->qu.pop();
        }
        this->qu.pop();
        while(not temp.empty()){
            this->qu.push(temp.front());
            temp.pop();
        }
    }
    bool empty(){
        return this->qu.size() == 0;
    }
    int top(){
        /*
        Time Complexity: O(n)
        */
        if(this->qu.empty()){
            return -1;
        }
        queue<int> temp;
        while( this->qu.size()>1){
            temp.push(this->qu.front());
            this->qu.pop();
        }
        int result = this->qu.front();
        while(not temp.empty() ){
            this->qu.push(temp.front());
            temp.pop();
        }
        this->qu.pop();
        this->qu.push(result);
        return result;
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