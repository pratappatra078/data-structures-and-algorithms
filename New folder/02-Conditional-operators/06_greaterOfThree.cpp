// Take 3 Positive integers input and print the greates of them
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter 3 Numbers : ";
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b && a > c)
        cout << a << " Is greater.";
    else if (b > a && b > c)
        cout << b << " is greater.";
    else
        cout << c << " is greater.";
}