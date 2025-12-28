/*
Given an array of strings. You can move any number of characters from one string to any other string any number of times. You just have to make all of them equal.
Print “Yes” if you can make every string in the array equal by using any number of operations otherwise print “No”.
Input:
["collegeee", "coll", "college"]
Output:
Yes
Explanation: String at index 1 can take two ‘e’ from index 0 and one ‘g’ from index 2.
Input:
["wall", "ah", "wallahah"]
Output:
No
Explanation: Here we don’t have enough number of characters to make all strings equal.
*/
#include <bits/stdc++.h>
using namespace std;
/*
Time Complexity: O(L), where L is the total number of characters
Space Complexity: O(K), where K is the number of unique characters
*/
bool check_pair_equal(vector<string> &str){
    unordered_map<char,int>mp;
    for(int i=0;i<str.size();i++){
        for(char ch:str[i]){
            mp[ch]++;
        }
    }
    int n=str.size();
    for(auto it:mp){
        if(it.second%n !=0){
            return false;
        }
    }return true;
}
int main() {
    // vector<string> str ={"colleggeee", "coll", "college"};
    vector<string> str ={"wall", "ah", "wallahah"};
    cout<<(check_pair_equal(str)?"Yes":"No");
    return 0;
}