/*
n = 3
    1
  1 2
1 2 3

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
            cout << ((char)(k + 64));
            if (k + 1 <= i)
                cout << " ";
        }

        cout << endl;
    }
    return 0;
}