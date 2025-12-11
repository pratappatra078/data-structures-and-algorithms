#include<bits/stdc++.h>
using namespace std;
int histogram(vector<int>&v){
    int n = v.size();
    stack<int>st;
    int ans = INT_MIN;
    st.push(0);
    for(int i=1;i<n;i++){
        while (!st.empty() && v[i]<v[st.top()])
        {
            int el = v[st.top()];
            int nsi = i;
            st.pop();
            int psi =(st.empty()) ?(-1):st.top();
            ans = max(ans,el*(nsi-psi-1));
        }
        st.push(i);
    }
    while(!st.empty()){
        int el =v[st.top()];
        int nsi = n;
        st.pop();
        int psi =(st.empty()) ?(-1):st.top();
        ans = max(ans,el*(nsi-psi-1));
    }
    return ans;
}
int main(){
    vector<int> arr={2,1,5,6,2,3,0,2,1,5,6,2,3};
    cout<<histogram(arr)<<endl;
    return 0;
}