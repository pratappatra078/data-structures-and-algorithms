#include <bits/stdc++.h>
using namespace std;

//time complexity: O(length of string)
//space complexity: O(26) -> constant

bool anagramCheck(string s1,string s2){
    // check if length are same or not
    if(s1.length() !=s2.length()){
        return false;
    }
    //create frequency array
    int n = s1.length();
    vector<int>frq(26,0);
    for(int i=0;i<n;i++){
        frq[s1[i]-'a']++;
        frq[s2[i]-'a']--;
    }
    // check if any value are not equal to zero
    for(int i=0;i<26;i++){
        if(frq[i]!=0)return false;
    }
    return true;

}
void runtest(){
    // test case 1
    assert(anagramCheck("listen","silent")==true);
    cout << "test case 1 - Passed"<<endl;

    //test case 2
    assert(anagramCheck("hello","world")==false);
    cout<<"test case 2 - Passed"<< endl;

    // test case 3
    assert(anagramCheck("anagram","nagaram")==true);
    cout << "test case 3 -Passed"<<endl;

    // test case 4
    assert(anagramCheck("rat","car")==false);
    cout<<"test case 4 -Passed"<<endl;

    // test case 5
    assert(anagramCheck("","")==true);
    cout<<"test case 5 -Passed"<<endl;

    cout<<endl<<"All test case Passed."<<endl;
}
int main() {
    // code here
    // string s1,s2;
    // cout <<"Enter Strings : ";
    // cin >> s1>>s2;
    // if(anagramCheck(s1,s2)){
    //     cout<<"These are anagram.";
    // }
    // else{
    //     cout<<"These are not anagram.";
    // }
    runtest();
    return 0;
}