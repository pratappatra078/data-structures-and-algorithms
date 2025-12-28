// No of bits from 0,0 to 3,3 index
#include <bits/stdc++.h>
using namespace std;

int f(int i, int j, int m, int n)
{
    if (i == m - 1 or j == n - 1)
        return 1;
    if (i >= m or j >= n)
        return 0;
    return f(i + 1, j, m, n) + f(i, j + 1, m, n);
}
int main()
{
    int m = 3, n = 3;
    int i = 0, j = 0;
    cout << f(i, j, m, n);
    return 0;
}
