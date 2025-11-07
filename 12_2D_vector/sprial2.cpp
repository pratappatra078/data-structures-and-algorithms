/* Given a positive integer n , generate an n X n matrix filled with element from 1 to n ^2 in sperial order .
n = 3
1 2 3
4 5 6
7 8 9

print in this order 1-> 2->3->6->9->2->1->4->5
*/
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> sprialMatrix(int n)
{
    vector<vector<int>> v(n, vector<int>(n)); // This vector is created to store the output data

    int left = 0;
    int right = n - 1;
    int top = 0;
    int bottom = n - 1;

    int direction = 0;
    int value = 1;

    while (top <= bottom and left <= right)
    {
        // left -> right
        if (direction == 0)
        {
            for (int i = left; i <= right; i++)
            {
                v[top][i] = value++;
            }
            top++;
        }
        // top -> bottom
        else if (direction == 1)
        {
            for (int j = top; j <= bottom; j++)
            {
                v[j][right] = value++;
            }
            right--;
        }
        //  right -> left
        else if (direction == 2)
        {
            for (int i = right; i >= left; i--)
            {
                v[bottom][i] = value++;
            }
            bottom--;
        }
        else // bottom -> top
        {
            for (int i = bottom; i >= top; i--)
            {

                v[i][left] = value++;
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }
    return v;
}

int main()
{
    int n;
    cout << "Enter the value of the n : ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    matrix = sprialMatrix(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}