// write a code to convert a decimal number into a binary digit.
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
        int parityDigit = n % 2;
        answer += parityDigit * power;
        power *= 10;
        n /= 2;
    }
    cout << answer;

    return 0;
}