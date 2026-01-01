// write a Program to check if a number is composite or not .
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
    bool composite = false; // false means prime

    for (int i = n / 2; i > 1; i--)
    {
        if (n % i == 0)
        {
            composite = true; // true means composite
            break;
        }
    }
    if (n == 1)
        cout << "neiter prime not composite." << endl;
    else if (composite)
        cout << "Composite number ." << endl;
    else
        cout << "prime number ." << endl;

    return 0;
}