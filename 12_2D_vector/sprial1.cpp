/*
Given an n X m matrix 'a', return all the elements of the matrix in spiral formate .
*/

#include <iostream>
#include <vector>
using namespace std;
void spiralMatrix(vector<vector<int>> &v)
{
    int left = 0;
    int right = v[0].size() - 1;
    int top = 0;
    int bottom = v[0].size() - 1;

    int direction = 0; // this veriable is used to indicate direction of the matrix.
    // 0-> left to right
    // 1-> top to bottom
    // 2->right to left
    // 3-> bottom to top

    while (left <= right and top <= bottom) // when top and bottom will become same and also left and right then the matrix will become complete .
    {
        // left -> right
        if (direction == 0)
        {
            for (int col = left; col <= right; col++)
            {
                cout << v[top][col] << " ";
            }
            top++;
        }
        // top -> bottom
        else if (direction == 1)
        {
            for (int row = top; row <= bottom; row++)
            {
                cout << v[row][right] << " ";
            }
            right--;
        }
        else if (direction == 2)
        {
            for (int col = right; col >= left; col--)
            {
                cout << v[bottom][col] << " ";
            }
            bottom--;
        }
        else
            for (int row = bottom; row >= top; row--)
            {

                cout << v[row][left] << " ";
                left++;
            }
        direction = (direction + 1) % 4; // This is used to keep the value between 1 to 3 by increasing 1;
    }
}
int main()
{
    // code here
    int n, m;
    cout << "Enter Row and Column : ";
    cin >> n >> m;
    cout << "Enter the values of the matrix : ";
    vector<vector<int>> vec(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
    }
    spiralMatrix(vec);

    return 0;
}