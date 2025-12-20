// Sum of Repetitive Elements
// You are given an integer n, representing the number of elements. Then, you will be given n elements. You have to return the sum of repetitive elements i.e. the elements that appear more than one time.
// Input: n=7
// Elements = [1,1,2,1,3,3,3]
// Output: 4
// Explanation: The repetitive elements are 1, 3 and the sum is 4.
#include <bits/stdc++.h>
using namespace std;
/*
Time Complexity: O(n)
Space Complexity: O(m) where m is no of unique element
*/
int main() {
    // take size
    int n;
    cout<<"Enter number of element: ";
    cin>>n;
    // take values
    vector<int> input (n);
    cout<<"Enter all element : "<<endl;
    while(n--){
        int x;
        cin>>x;
        input.push_back(x);
    }
    // storing frequency of every element in input array
    map<int,int> mp;
    for(int i=0;i<input.size();i++){
        mp[input[i]]++;
    }
    // finding sum of repetative element
    int sum =0;
    for(auto pair:mp){
        if(pair.second>1){
            sum += pair.first;
        }
    }
    cout <<"Total Sum of the unique element is "<<endl;
    cout <<sum;
    return 0;
}
