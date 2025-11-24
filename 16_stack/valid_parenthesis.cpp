#include <bits/stdc++.h>
using namespace std;
bool check_parenthesis(string s){
    stack<char>st;
    for(int i =0;i<s.size();i++){
        if(s[i]=='(' or s[i]=='[' or s[i]=='{'){
            st.push(s[i]);
        }
        else{
            if(s[i]==')' and not st.empty() and st.top() == '('){
                st.pop();
            }
            else if(s[i]=='}' and not st.empty() and st.top() == '{'){
                st.pop();
            }
            else if(s[i]==']' and not st.empty() and st.top() == '['){
                st.pop();
            }
            else return false;
        }
    }
    return true;
}
int main() {
    // code here
    string s = "({[()]})({[()})";
    if(check_parenthesis(s)) cout<< "Balanced\n";
    else cout <<"Not Balanced\n";
    return 0;
}