#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int max_one = 0;
        int left = 0;
        int right = 0;
        int zero = 0;

        for (; right < nums.size(); right++) {
            if (nums[right] == 0) {
                zero++;
            }
            while (zero > k) {
                if (nums[left] == 0) {
                    zero--;
                }
                left++;
            }
            max_one = max(max_one, (right - left) + 1);
        }
        return max_one;
    }
};
void runTest(vector<int>v,int k,int answer){
    Solution s;
    int ans = s.longestOnes(v,k);
    if(ans==answer){
        cout << "Test Case Passed "<<endl;
    }
}
int main() {
    // Test case 1: Basic example
    runTest({1,1,1,0,0,0,1,1,1,1,0}, 2, 6);
    
    // Test case 2: All zeros - can flip k zeros
    runTest({0,0,0,0,0}, 2, 2);
    
    // Test case 3: All ones - no flips needed
    runTest({1,1,1,1,1}, 0, 5);
    
    // Test case 4: k is larger than number of zeros
    runTest({1,0,1,0,1}, 5, 5);
    
    // Test case 5: Alternating pattern
    runTest({0,1,0,1,0,1,0,1}, 2, 5);
    
    return 0;
}