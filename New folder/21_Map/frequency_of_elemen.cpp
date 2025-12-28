// Count frequency of each element in the array.
// Problem Statement: Given an array, we have found the number of occurrences of each element in the array.
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        int max_freq = 0;
        for(auto it:mp){
            max_freq = max(max_freq,it.second);
        }
        for(auto it:mp){
            if(it.second == max_freq){
                return it.first;
            }
        }
        return 0;
    }
};
int main() {
    Solution obj;
    // test case 1
    vector<int> v1 = {1,2,2,3,3,3};
    cout<< obj.mostFrequentElement(v1)<<endl;

    //test case 2
    vector<int> v2 = {4,4,5,5,6};
    cout<< obj.mostFrequentElement(v2)<<endl;


    return 0;
}