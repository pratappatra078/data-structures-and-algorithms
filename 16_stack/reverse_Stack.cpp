#include <bits/stdc++.h>
using namespace std;
/*
Time Complexity: O(n)
space complexity: O(n)
*/
void reverse(stack<int>&st){
    stack<int>temp1;
    while(not st.empty()){
        int curr = st.top();
        st.pop();
        temp1.push(curr);
    }
    stack<int>temp2;
    while(not temp1.empty()){
        int curr = temp1.top();
        temp1.pop();
        temp2.push(curr);
    }
    while(not temp2.empty()){
        int curr = temp2.top();
        temp2.pop();
        st.push(curr);
    }
}
/*
Time Complexity: O(n^2)
space complexity: O(n^2)
*/

void insert_bottom(stack<int>&st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int curr = st.top();
    st.pop();
    insert_bottom(st,val);
    st.push(curr);
}

void reverse_recursive(stack<int>&st){
    if(st.size()==1){
        return;
    }
    int curr = st.top();
    st.pop();
    reverse_recursive(st);
    insert_bottom(st,curr);
}
int main() {
    // code here
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    reverse_recursive(st);

    while(not st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}