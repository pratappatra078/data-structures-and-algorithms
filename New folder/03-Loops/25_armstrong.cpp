#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // code here
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int original = n;
    int length = 0;
    int temp = n;
    int sum = 0;

    while (temp > 0)
    {
        length++;
        temp /= 10;
    }
    cout << 
    while (n > 0)
    {
        sum += pow(n % 10, length);
        n /= 10;
    }

    if (sum == original)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}