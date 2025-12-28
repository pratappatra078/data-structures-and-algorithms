#include <bits/stdc++.h>
using namespace std;
vector<int> max_window(vector<int> &arr, int k)
{
    deque<int> dq;
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        while (!dq.empty() && arr[dq.back()] <= arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    ans.push_back(arr[dq.front()]);
    for (int i = k; i < arr.size(); i++)
    {
        int curr = arr[i];
        if (dq.front() == (i - k))
            dq.pop_front();
        while (!dq.empty() && arr[dq.back()] < arr[i])
        {
            dq.pop_back();
        }
        dq.pop_back();
        ans.push_back(arr[dq.front()]);
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> ans = max_window(nums, k);
    cout << "Answer :" << endl;
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}