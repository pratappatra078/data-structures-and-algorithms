//take input integer number from user and print the modulus of it .

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter The number : ";
    cin >> n;
    if (n < 0)
    {
        cout << -n;
    }
    else
        cout << n;
}