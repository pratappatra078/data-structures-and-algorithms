/*
Question Name: Two Sum
Given an array of length n and a target, return a pair whose sum is equal to the target.
If there is no pair present, return -1.

Input 1:
n=7
Elements: [1,4,5,11,13,10,2]
target=13
Output 1:
[3,6]

Input 2:
n=5
Elements: [9,10,2,3,5]
target=15
Output 1:
[1,4]

*/
#include <bits/stdc++.h>
using namespace std;
//TC: O(n) SP:O(n) 
vector<int> two_sum(int n,vector<int>input,int target){
    vector<int> ans(2,-1);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        if(mp.find(target-input[i])!=mp.end()){
            ans[0]=mp[target-input[i]];
            ans[1]=i;
            return ans;
        }else{
            mp[input[i]]=i;
        }
    }
    return ans;
}

// bruit force TC: O(n^2) SP: O(1)
// vector<int> two_sum(int n,vector<int>input,int target){
//     vector<int> ans(2,-1);
//     for(int i=0;i<n;i++){
//         for (int j = 0; j < n; j++)
//         {
//             if(input[i]+input[j]==target){
//                 ans[0]=i;
//                 ans[1]=j;
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

int main() {
    // int n=7;
    // vector<int> input={1,4,5,11,13,10,2};
    // int target = 13;
    int n=5;
    vector<int> input={9,10,2,3,5};
    int target = 15;
    vector<int> ans= two_sum(n,input,target);
    cout<<ans[0]<<"  "<<ans[1]<<endl;
    return 0;
}