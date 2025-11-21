#include <bits/stdc++.h>
using namespace std;
stack<int>copyStack(stack<int>&input){
    stack<int> temp;
    while(not input.empty()){
        //do the task till the input stack become empty
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }
    stack<int> result;
    while(not temp.empty()){
        //do the task till the input stack become empty
        int curr = temp.top();
        temp.pop();
        result.push(curr);
    }
    return result;

}
int main() {
    // code here
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int> res = copyStack(st);
    // print
    while(not res.empty()){
        int curr = res.top();
        res.pop();
        cout<<curr<<"\n";
    }
    return 0;
}