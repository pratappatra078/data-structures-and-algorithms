#include <bits/stdc++.h>
using namespace std;

// Time: 0(logn)
// space: 0(1)
int binarySearch(vector<int> &v, int target)
{
    int lo = 0;
    int hi = v.size() - 1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (v[mid] == target)
            return mid;
        else if (v[mid] > target)
        {
            hi = mid - 1;
        }
        else
            lo = mid + 1;
    }
    return -1;
}

// Time: 0(logn)
// space: 0(logn)

int binarySearchRecursion(vector<int> &v, int target, int lo, int hi)
{
    int mid = lo +((lo - hi) / 2);
    if (v[mid] == target)
        return mid;
    else if (v[mid] > target)
    {
        return binarySearchRecursion(v, target, lo, mid - 1);
    }
    else
        return binarySearchRecursion(v, target, mid + 1, hi);
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    vector<int> v;
    cout << "Enter all the elements in sorted order : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int target;
    cout << "Enter the target : ";
    cin >> target;
    cout << binarySearchRecursion(v, target, 0, n);
    return 0;
}