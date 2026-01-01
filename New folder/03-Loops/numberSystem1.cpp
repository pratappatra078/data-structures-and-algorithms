// write a cpp program to convert a binary number into a decimal number .
#include <iostream>
using namespace std;

int main()
{
    // code here
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int answer = 0;
    int power = 1;
    while (n > 0)
    {
        int lastDigit = n % 10;
        answer += lastDigit * power;
        power *= 2;
        n /= 10;
    }
    cout << "The decimal Number is : " << answer;
    return 0;
}