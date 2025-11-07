#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code here
    // number reverse
    int n = 36925;
    while (n > 0)
    {
        cout << n % 10;
        n /= 10;
    }
    return 0;
}