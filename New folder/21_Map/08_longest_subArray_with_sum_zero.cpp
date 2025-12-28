/*
Given an array arr[] of length N, find the length of the longest subarray with a sum equal to 0.

Input 1:
n = 8
arr[] = {15, -2, 2, -8, 1, 7, 10, 23}

Output 1: 5

Input 2:
n = 3
arr[] = {1, 2, 3}

Output 2: 0
*/
#include <bits/stdc++.h>
using namespace std;
/*
Time Complexity: O(n) where n is no of element in vector
Space Complexity: O(n) where n is no of element in vector
*/
int f(vector<int> &v){
    unordered_map<int,int> mp;
    int prefixSum =0;
    int maxLength = 0;
    for(int i=0;i<v.size();i++){
        prefixSum +=v[i];
        if(prefixSum==0){
            maxLength = i+1;
        }
        if(mp.find(prefixSum)!=mp.end()){
            maxLength = max(maxLength,i-mp[prefixSum]);
        }else{
            mp[prefixSum]=i;
        }
    }
    return maxLength;
}
int main() {
    // int n = 8;
    // vector<int> arr= {15, -2, 2, -8, 1, 7, 10, 23};
    int n = 3;
    vector<int> arr = {1, 2, 3};
    cout<<(f(arr))<<endl;
    return 0;
}