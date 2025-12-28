// write a program to calculate the  sum of numbers from 1 to n ,taking n as input from user.

#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    cout << sum(n);

    return 0;
}