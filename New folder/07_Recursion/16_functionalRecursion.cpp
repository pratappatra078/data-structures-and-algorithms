// Write a python Program to Print sum from 1 to n using functional recursion
// Time complexity : 0(n)
// space complexity : 0(n)
#include <iostream>
using namespace std;
int f(int n)
{
    if (n == 0)
        return 0;
    return n + f(n - 1);
}
int main()
{
    // code here
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << f(n);
    return 0;
}