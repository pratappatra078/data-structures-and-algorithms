#include <iostream>
#include <vector>
#include <stack>
using namespace std;


//bruit force 
// TC: O(n^2) SP: O(n);
vector<int> next_greater_element(vector<int>v){
    vector<int> ans(v.size(),-1);
    for(int i =0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[j]>=v[i]){
                ans[i]=v[j];
                break;
            }
        }
    }
    return ans;
}


//optimised by stack
// TC: O(n) SC: O(n)
vector<int> next_greater_element_optimised(const vector<int>&v){
    int n = v.size();
    vector<int> ans(n,-1);
    //
    stack<int> st;
    // store first
    st.push(0);
    // second  to last
    for(int i=1;i<v.size();i++){
        while(not st.empty() && v[i] > v[st.top()]){
            ans[st.top()] = v[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}
// next smaller element 
vector<int> next_smaller_element_optimised(const  vector<int>&v){
    int n = v.size();
    vector<int> ans(n,-1);
    //
    stack<int> st;
    // store first
    st.push(0);
    // second  to last
    for(int i=1;i<v.size();i++){
        while(not st.empty() && v[i] < v[st.top()]){
            ans[st.top()] = v[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}
int main(){
    int n ;
    cout<<"Enter the size of the vector: ";
    cin>>n;
    vector<int> v;
    v.reserve(n);
    cout<<"Enter the elements of the vector: ";
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> ans = next_greater_element_optimised(v);
    for(auto s:ans) cout<<s<<" ";
    return 0;
}