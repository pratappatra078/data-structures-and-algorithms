// Sum of first n numbers using Parameterised recursion
// Time complexity : 0(n)
// space complexity : 0(n)
#include <iostream>
using namespace std;
int parameterised_recursion(int n, int sum)
{
    if (n == 0)
    {
        cout << sum ;
        return 0;
    }
    return parameterised_recursion(n - 1, sum + n);
}
int main()
{
    // code here
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    parameterised_recursion(n, 0);
    return 0;
}