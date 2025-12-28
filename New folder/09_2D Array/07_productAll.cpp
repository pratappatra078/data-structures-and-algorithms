// Write a program to calculate the product all elements in a matrix.

#include <iostream>
using namespace std;

int main()
{
    int arr[2][3] = {1, 2, 3, 4, 5, 6};
    int product = 1;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            product *= arr[i][j];
        }
    }
    cout << product;

    return 0;
}