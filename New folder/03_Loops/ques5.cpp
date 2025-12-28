/*
find th sum of digits in a given number .
*/

#include <iostream>
using namespace std;

int main()
{
    long long int num ;
    cout << "Enter the number : ";
    cin >> num ;

    int sum = 0;
    while (num > 0)
    {
        sum = sum + (num % 10);
        num /=10;
    }
    cout << "Sum = "<<sum ;

    return 0;
}