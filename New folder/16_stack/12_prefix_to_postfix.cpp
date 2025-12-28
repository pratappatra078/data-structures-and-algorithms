#include <bits/stdc++.h>
using namespace std;
string evaluate(string &s){
    stack<string>st;
    reverse(s.begin(),s.end());
    for (int i = 0; i < s.size(); i++)
    {
        if(isdigit(s[i])){
            st.push(to_string(s[i]-'0'));
        }else {
            string v1 = st.top();
            st.pop();
            string v2 = st.top();
            st.pop();
            st.push(v1+v2+s[i]);
        }
    }
    return st.top();
    
}
int main() {
    string s = "*+31-15"; // ans: 31+15-*
    cout<<evaluate(s);
    return 0;
}