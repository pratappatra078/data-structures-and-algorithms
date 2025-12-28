// Take 3 Positive integers input and print the least of them
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter 3 Numbers : ";
    int a, b, c, greatest;
    cin >> a >> b >> c;

    // if (a < b && a < c)
    //     cout << a << " Is least.";
    // else if (b < a && b < c)
    //     cout << b << " is least.";
    // else
    //     cout << c << " is least.";
    greatest = max(a, max(b, c));

    cout << greatest << " is greater.";
}