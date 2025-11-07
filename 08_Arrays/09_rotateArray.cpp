#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        vector<int> v;
        int l = nums.size();
        for (int i = 0; i < l; i++)
        {
            v.push_back(nums[i]);
        }
        for (int i = 0; i < l; i++)
        {
            nums[i] = v[(k + i + 1) % l];
        }
    }
};
int main()
{
    int k = 3;
    vector<int> nums ={1, 2, 3, 4, 5, 6, 7};
    
    return 0;
}
