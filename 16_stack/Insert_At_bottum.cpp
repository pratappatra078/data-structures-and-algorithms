#include <bits/stdc++.h>
using namespace std;

void insert_at_bottom(stack<int>&st,stack<int>&result,int  val){
    if(st.empty()){
        result.push(val);
        return;
    }
    int curr = st.top();
    st.pop();
    insert_at_bottom(st,result,val);
    result.push(curr);
}
int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int>result;
    int val = 10;
    insert_at_bottom(st,result,val);

    while(not result.empty()){
        cout<<result.top()<<endl;
        result.pop();
    }
    return 0;
}