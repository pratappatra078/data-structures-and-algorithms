// Write A Program to find out the highest factor of a number (non other than n itself).

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    int factor = 1;
    for (int i = n / 2; i >= 1; i--)
    {
        if (n % i == 0)
        {
            factor = i;
            break;
        }
    }
    cout << "The Highest Factor of " << n << " is " << factor;

    return 0;
}