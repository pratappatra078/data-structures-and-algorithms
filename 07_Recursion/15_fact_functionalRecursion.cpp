// write a python Program to Print factorial of n using functional Recursion

// Time complexity : 0(n)
// space complexity : 0(n)

#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    return n * fact(n - 1);
}
int main()
{
    // code here
    int n;
    cout << "Enter the n : ";
    cin >> n;
    cout << fact(n);
    return 0;
}