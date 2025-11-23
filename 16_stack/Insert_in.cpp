#include <bits/stdc++.h>
using namespace std;

void insert_at_bottom(stack<int>&st,int val){
    stack<int>temp;
    while(not st.empty()){
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    //now st is empty and top s in -1
    st.push(val);
    while(not temp.empty()){
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}

void insert_at_bottom_recursive(stack<int>&st,stack<int>&result,int  val){
    if(st.empty()){
        result.push(val);
        return;
    }
    int curr = st.top();
    st.pop();
    insert_at_bottom_recursive(st,result,val);
    result.push(curr);
}

void insert_at_idx(stack<int>&st,int val,int idx){
    stack<int> temp;
    int cnt = 0;
    while(cnt != st.size()-idx ){
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(val);
    while(not temp.empty()){
        int curr = temp.top();
        st.push(curr);
        temp.pop();
    }
}
int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    insert_at_idx(st,15,2);

    while(not st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}