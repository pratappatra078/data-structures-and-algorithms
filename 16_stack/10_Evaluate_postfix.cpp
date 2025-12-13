#include <bits/stdc++.h>
using namespace std;
int calaulate_value(int num1,int num2,char oper){
    if(oper=='^'){
        return pow(num1,num2);
    }
    else if(oper=='/'){
        return num1/num2;
    }
    else if(oper=='*'){
        return num1*num2;
    }
    else if(oper=='+'){
        return num1+num2;
    }
    else {
        return num1-num2;
    }
    return INT_MIN;
}
int evaluate_value(string s){
    stack<int>st;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(isdigit(ch)){
            st.push(ch-'0');
        }
        else{
            int v2 = st.top();
            st.pop();
            int v1 = st.top();
            st.pop();
            st.push(calaulate_value(v1,v2,s[i]));
        }
    }
    return st.top();
}
int main() {
    string s = "231*+9-";
    cout<<evaluate_value(s);
    return 0;
}