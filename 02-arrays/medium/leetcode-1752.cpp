//  Check if Array Is Sorted and Rotated
/*
Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 2 positions to begin on the element of value 3: [3,4,5,1,2].
*/

/*
Sol: used two pointer 
Time Complexity : O(n)
Space Complexity : O(1)

*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool check(vector<int> &nums){
        int n = nums.size();
        if (n <= 0) return false;
        if (n == 1) return true;
        int drop = 0;
        for (int i = 0; i < n; i++){
            if (nums[i] > nums[(i + 1) % n]) drop++;
            if (drop > 1) return false;
        }
        return true;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> tests = {
        {3,4,5,1,2},
        {1,2,3,4,5},
        {2,1},
        {2,7,4,1,2,6,2},
        {1}
    };
    for(auto &t:tests){
        cout<<(s.check(t)?"true":"false")<<endl;
    }
    return 0;
}
