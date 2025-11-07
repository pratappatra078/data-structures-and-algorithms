// Display this ap - 1,3,5,7,9..... upto 'n' terms.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    // n^th Term formula = a + (n-1)d where a = first term , d = common difference .
    for (int i = 1; i <= 2 * n - 1; i += 2)
    {
        cout << i << "  ";
    }

    return 0;
}