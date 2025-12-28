/*
Check whether two Strings are isomorphic of each other
Return true if they are else return false.
Two strings are isomorphic of each other if there is a one-to-one mapping possible for every character of the first string to every character of second string and all occurrences of every character in first string maps to the same character in the second string.
Input 1:
aab
xxy
Output 1:
true

Input 2:
abcdec
viuoug
Output 2:
false

*/
#include <bits/stdc++.h>
using namespace std;
bool isomorphic(const string &s1,const string &s2){
    //if two string length are not same 
    if(s1.size() != s2.size()){
        return false;
    }

    unordered_map<char,char>mp;
    for(int i=0;i<s1.size();i++){
        if(mp.find(s1[i])!=mp.end()){
            if(mp[s1[i]]!=s2[i]){
                return false;
            }
        }
        else{
            mp[s1[i]]=s2[i];
        }
    }
    return true;
}
bool check_isomorphic(const string &s1,const string &s2){
    bool an1 = isomorphic(s1,s2);
    bool an2 = isomorphic(s2,s1);
    return an1 && an2;
}
int main() {
    // vector<string> input={"aab","xxy"};
    vector<string> input={"abcdec","viuoug"};
    cout<<(check_isomorphic(input[0],input[1])?"Yes":"No");
    return 0;
}