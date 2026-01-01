// WAP to print sum of digits of a given number .
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter Number : ";
    cin >> n;

    while (n > 0)
    {
        sum += n % 10 ;
        n = n / 10;
    }
    cout << "Sum = " << sum ;
    return 0;
    // Fully solve my Me.
}