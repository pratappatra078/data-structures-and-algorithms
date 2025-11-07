// alphabet diamond shape
#include <iostream>
using namespace std;

int main()
{
    // code here
    int n ;
    cout << "Enter the number :";
    cin >> n;

    int left = n;
    int right = n;
    int range = 2 * n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << ((char)(64 + j));
        }

        cout << endl;
    }

    for (int i = n + 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= i - n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * ((2 * n) - i) - 1; j++)
        {
            cout << ((char)(64 + j));
        }
        cout << endl;
    }

    return 0;
}