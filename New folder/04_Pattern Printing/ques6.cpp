/*
n = 4
   1
  2 2
 3   3
4444444

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;

    int range = n * 2 - 1;
    int left_side = n;
    int right_side = n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= range; j++)
        {
            if (j == left_side || j == right_side)
            {
                cout << i;
            }
            else if (i == n && (j >= 1 && j <= 2 * n - 2))
            {
                cout << i;
            }
            else
                cout << " ";
        }
        left_side--;
        right_side++;
        cout << endl;
    }
}