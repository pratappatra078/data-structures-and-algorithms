// Find the greatest common devider of two number .
// input : 48 72 output: 24

#include <iostream>
#include <algorithm>
using namespace std;

int f(int a, int b, int x)
{

    if (b % a == 0 and x % a == 0)
        return a;
    int gcd = f(a - 1, b, x);
    return gcd;
}
int main()
{
    int a, b;
    cout << "Enter the two number : ";
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    int minimum = min(a, b);
    int maximum = max(a, b);
    int x = minimum;

    cout << f(minimum, maximum, x);
    return 0;
}