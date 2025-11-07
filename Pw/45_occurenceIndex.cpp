#include <bits/stdc++.h>
using namespace std;

int upperbound(vector<int> &v, int target)
{
    int lo = 0, hi = v.size() - 1;
    int ans = -1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (v[mid] <= target)
        {
            ans = mid;
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return ans;
}
int lowerbound(vector<int> &v, int target)
{
    int lo = 0, hi = v.size() - 1;
    int ans = -1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (v[mid] >= target)
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the Size of the array : ";
    cin >>n;
    vector<int> v;
    cout << "Enter the elements of the array in assending order : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int target ;
    cout<<"Enter the target : ";
    cin>>target;
    vector<int> ans;
    int lower = lowerbound(v, target);
    if (v[lower] != target)
    {
        ans.push_back(-1);
        ans.push_back(-1);
    }
    else
    {
        int upper = upperbound(v, target);
        ans.push_back(lower);
        ans.push_back(upper);
    }
    cout << ans[0]<<" "<<ans[1];

    return 0;
}