/*
Check whether two Strings are anagram of each other
Return true if they are else return false.
An anagram of a string is another string that contains the same characters, only the order of characters can be different.
For example, “abcd” and “dabc” are anagram of each other.
Input 1:
triangle
integral
Output 1:
Yes
Input 2:
anagram
gram
Output 2:
NO
*/
#include <bits/stdc++.h>
using namespace std;
/*
Time Complexity: O(L), where L is the total number of characters
Space Complexity: O(K), where K is the number of unique characters
*/

bool check_anagram(const string &s1,const string &s2){
    //if two string length are not same 
    if(s1.size() != s2.size()){
        return false;
    }
    
    //declear a map
    unordered_map<char,int> mp;

    // store all frequency into a hashmap
    for(char ch:s1){
        mp[ch]++;
    }

    // for second string subtract frequency
    for(char ch:s2){
        if(mp.find(ch)==mp.end()){
            return false;
        }else{
            mp[ch]--;
        }
    }

    //check if all frequency are 0 or not
    for(auto freq:mp){
        if(freq.second != 0){
            return false;
        }
    } return true;
}
int main() {
    // vector<string> input={"triangle","integral"};
    vector<string> input={"anagram","gram"};
    cout<<(check_anagram(input[0],input[1])?"Yes":"No");
    return 0;
}