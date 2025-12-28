// calculate the factorial of n using recursion

#include <iostream>
using namespace std;
int f(int n)
{
    if (n == 0)
        return 1;
    return n * f(n - 1);
}
int main()
{
    int n = 5;
    cout << f(n);
    return 0;
}