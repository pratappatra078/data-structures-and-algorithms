#include <bits/stdc++.h>
using namespace std;

void advancePrint(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int bottum = (2 * n - 2) - j;
            int left = j;
            int right = (2 * n - 2) - i;
            cout << n - min(min(top, bottum), min(left, right)) << " ";
        }
        cout << endl;
    }
}
int main()
{
    advancePrint(4);
    return 0;
}