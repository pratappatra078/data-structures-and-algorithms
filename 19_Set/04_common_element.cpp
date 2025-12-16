/*
Add the common elements
Given 2 vectors v1 and v2. Find out the common elements between the two and return the sum of them.
Input:
V1 = {1, 1, 2, 3, 3, 3}
V2 = {5, 6, 7, 5, 2, 3, 6}
*/
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int common_sum(vector<int>&v1,vector<int>&v2){
    int sum = 0;
    set<int> st;
    for(auto itr:v1){
        st.insert(itr);
    }
    // find element
    for(auto ele:v2){
        if(st.find(ele) != st.end()){
            sum += ele;
        }
    }
    return sum;
}
int main() {
    vector<int> v1={1, 1, 2, 3, 3, 3};
    vector<int> v2={5, 6, 7, 5, 2, 3, 6};
    cout <<"The sum is :"<< common_sum(v1,v2)<<endl;
    return 0;
}