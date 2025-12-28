#include <bits/stdc++.h>
using namespace std;
int binarySearch(int n)
{
    // Time: 0(log n)
    // Space :0(1)
    int lo = 0, hi = n;
    int ans = -1;
    while (lo <= hi)
    {
        int mid = lo + ((hi - lo) / 2);
        if (mid * mid <= n)
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
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << binarySearch(n);
    return 0;
}