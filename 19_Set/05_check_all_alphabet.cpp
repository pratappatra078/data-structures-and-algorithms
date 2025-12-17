/*
Check if string has all english alphabets
Given a string. You have to check if it has all english alphabets from a-z.
*/
#include <bits/stdc++.h>
using namespace std;

bool check_alphabet(string s){
    if(s.size()<26){
        return false;
    }
    transform(s.begin(),s.end(),s.begin(),::tolower);
    set<char> alphabet;
    for(auto ch:s){
        alphabet.insert(ch);
    }
    return alphabet.size()==26;
}
int main() {
    string s;
    cout <<"Enter the word : "<<endl;
    cin>>s;
    if(check_alphabet(s)){
        cout <<"Yes ! all alphabet exist.\n";
    }
    else{
        cout<<"No ! all alphabet doesnot exist.\n";
    }
    return 0;
}