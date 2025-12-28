// WAP to count digit of a given number .
#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter The Number : ";
    cin >> n;

    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    cout << "The length of the number is : " << count;
    return 0;
}