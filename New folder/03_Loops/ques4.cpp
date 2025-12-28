/*
count no of digits for a given number .
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    cout << "Number of digits :"<<count;

    return 0;
}