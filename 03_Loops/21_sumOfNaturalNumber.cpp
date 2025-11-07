// WAP to sum of natural numbers from 1 to n . 'n' will be the input from user .
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    // using math formula
    // cout << "Sum From 1 to " << n << " is : " << (n * (n + 1) / 2);

    // using for loop
    long long int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << i;
        if (i < n)
            cout << " + ";
        sum += i;
    }
    cout << " = " << sum;
    // fully writen by me .

    return 0;
}