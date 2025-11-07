/*
n = 4

1 2 3 4 5 6
1         6
1         6
1 2 3 4 5 6
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
        if (i == 1 or i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << j << " ";
            }
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == 1 or j == n)
                    cout << j << " ";
                else
                    cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}