/*
Given n integers (can be duplicates), print the second smallest integer. If it does not exist, print -1.
INPUT: n= 4
       1 2 2 -4
OUTPUT: 1
*/
#include <bits/stdc++.h>
using namespace std;
int second_smallest(vector<int> nums){
    if(nums.size()<2){
        return -1;
    }
    set<int> st;
    for(int i=0;i<nums.size();i++){
        st.insert(nums[i]);
    }
    for(auto it:st){
        cout <<it<<" ";
    }cout<<endl;
    set<int> ::iterator p = st.begin();
    p++;

    return *p;
}
int main() {
    int n ;
    cout <<"Enter total Number : "<<endl;
    cin>>n;
    vector<int> nums;
    cout <<"Enter all the numbers : "<<endl;
    while(n--){
        int x;
        cin >>x;
        nums.push_back(x);
    }
    cout<<"The second smallest is : "<<second_smallest(nums);
    return 0;
}