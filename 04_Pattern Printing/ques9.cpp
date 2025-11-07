// write a c++ Program to print a triangle of prime numbers upto given number of lines of the triangle .
/*n =3
    2
  3  5
7 11 13
*/

#include <iostream>
using namespace std;

int star(int x)
{
    int arr[x][2];
    arr[1][1] = 1;
    arr[1][2] = 1;
    for (int i = 2; i <= x; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            arr[i][j] = arr[i - 1][i - 1] + arr[i - 1][i];
        }
    }
    return arr[x][2];
}
int main()
{
    // code here
    int n = 5;

    int star_lagbe = star(n);
    int prime[star_lagbe];

    int range = n + 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + i - 1; j++)
        {
            if (((i + j) % 2 != 0) && ((i + j) > n))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
