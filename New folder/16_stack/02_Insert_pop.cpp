#include <bits/stdc++.h>
using namespace std;

void insert_at_bottom(stack<int> &st, int val)
{
    stack<int> temp;
    while (not st.empty())
    {
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    // now st is empty and top s in -1
    st.push(val);
    while (not temp.empty())
    {
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}

void insert_at_bottom_recursive(stack<int> &st, stack<int> &result, int val)
{
    if (st.empty())
    {
        result.push(val);
        return;
    }
    int curr = st.top();
    st.pop();
    insert_at_bottom_recursive(st, result, val);
    result.push(curr);
}

void insert_at_idx(stack<int> &st, int val, int idx)
{
    stack<int> temp;
    int cnt = 0;
    while (cnt != st.size() - idx)
    {
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(val);
    while (not temp.empty())
    {
        int curr = temp.top();
        st.push(curr);
        temp.pop();
    }
}
void insert_at_idx_recursive(stack<int> &st, int val, int idx, int cnt)
{
    if (cnt == st.size() - idx)
    {
        st.push(val);
        return;
    }
    int curr = st.top();
    st.pop();
    insert_at_idx_recursive(st, val, idx, cnt++);
    st.push(curr);
}
void delete_from_bottom(stack<int> &st)
{
    stack<int> temp;
    while (st.size() != 1)
    {
        int curr = st.top();
        temp.push(curr);
        st.pop();
    }
    st.pop();
    while (not temp.empty())
    {
        int curr = temp.top();
        st.push(curr);
        temp.pop();
    }
}
void delete_from_bottom_recursive(stack<int> &st)
{
    if (st.size() == 1)
    {
        st.pop();
        return;
    }
    int curr = st.top();
    st.pop();

    delete_from_bottom_recursive(st);
    st.push(curr);
}
void delete_at_any_index(stack<int>&st,int idx){
    stack<int>temp;
    while(st.size()!=idx){
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }st.pop();
    while(not temp.empty()){
        int curr = temp.top();
        st.push(curr);
        temp.pop();
    }
}
void delete_at_any_index_recursive(stack<int>&st,int idx){
    if(st.size()==idx){
        st.pop();
        return;
    }
    int curr = st.top();
    st.pop();
    delete_at_any_index_recursive(st,idx);
    st.push(curr);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    delete_at_any_index_recursive(st,2);

    while (not st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}