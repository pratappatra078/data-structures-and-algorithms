// Write A Program to print factorial of a given number n .
#include <iostream>
using namespace std;

int main()
{
    int n, first = 0, second = 1;
    cout << "Enter The number : ";
    cin >> n;

    long long int fact = 1;
    while (n != 0)
    {
        fact *= n;
        n -= 1;
    }
    cout << "Factorial :  " << fact;

    return 0;
    //fully writen by me .
}