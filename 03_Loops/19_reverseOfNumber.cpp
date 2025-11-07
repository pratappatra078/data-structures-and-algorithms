// WAP to print reverse of a given number .
#include <iostream>
using namespace std;

int main()
{
    int n, rev = 0;
    cout << "Enter number : ";
    cin >> n;

    while (n != 0)
    {
        int ld = n % 10;
        rev = rev * 10 + ld;
        n = n / 10;
    }
    cout << "Reverse  = " << rev;
    return 0;
}