// input : 123 output: no
// input: 153 output: Yes
#include <iostream>
using namespace std;

int power_calculate(int i, int j)
{
    if (j == 0)
        return 1;
    if (j % 2 == 0)
    {
        int result = power_calculate(i, j / 2);
        return result * result;
    }
    else
    {
        int result = power_calculate(i, (j - 1) / 2);
        return i * result * result;
    }
}

int f(int n, int len)
{
    if (n <= 0)
        return 0;
    int result = power_calculate(n % 10, len) + f(n / 10, len);
    return result;
}

int main()
{
    // take n as user number 
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int length = 0;
    int temp = n;

    while (temp > 0)
    {
        length++;
        temp /= 10;
    }

    if (f(n, length) == n)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}