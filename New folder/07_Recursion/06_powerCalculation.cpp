// write a program to calculate the power of a number using recursion function.

#include <iostream>
using namespace std;
int re_pow(int a, int b)
{
    if (b == 0)
        return 1;
    return a * re_pow(a, b - 1);
}

int main()
{
    int a;
    cout << "Enter n : ";
    cin >> a;

    int b;
    cout << "Enter n : ";
    cin >> b;

    cout << re_pow(a, b);
    return 0;
}