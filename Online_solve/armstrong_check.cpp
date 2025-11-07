#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isArmstrong(int n)
    {
        if (n < 0)
            return false;
        int size = (int)(log10(n) + 1);
        int dupvalue = n;
        double sum = 0;
        while (dupvalue > 0)
        {
            int temp = dupvalue % 10;
            sum += (pow(temp, size));
            dupvalue /= 10;
        }
        if (sum == n)
            return true;
        else
            return false;
    }
};
int main()
{
    Solution obj;
    for (int i = 0; i < 1e9; i++)
    {
        if (obj.isArmstrong(i))
            cout << i << " -> " << "Armstrong" << endl;
    }

    // code here
    return 0;
}