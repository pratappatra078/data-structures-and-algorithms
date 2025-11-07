/*
n = 3

    A
  A B
A B C

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
            if (j <= n - i)
                cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k;
            if (k + 1 <= i)
                cout << " ";
        }

        cout << endl;
    }
    return 0;
}