/* Given a matrix 'a' of dimension n X m and two cordinates (l1,r1) and (l2,r2) .Return the sum of all elements from  (l1,r1) and (l2,r2)

matrix =
[
  [1,2,3,4]
  [5,6,7,8]
 [9,10,11,12]
[13,14,15,16]
]

(l1,r1) = 1,1
(l2,r2) = 2,2

sum = 34
*/
#include <iostream>
#include <vector>
using namespace std;
int sumCalculate(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            matrix[i][j] += matrix[i][j - 1];
        }
    }
    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        if (r2 != 0)
            sum += matrix[i][r2] - matrix[i][r1 - 1];
        else
            sum += matrix[i][r2];
    }
    return sum;
}
int main()
{
    // code here
    int row, column;
    cout << "Enter Row & Column : ";
    cin >> row >> column;
    cout << "Enter the matrix's element : ";

    vector<vector<int>> matrix(row, vector<int>(column));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int l1, r1, l2, r2;
    cout << "Enter the first & last index to add elements : ";
    cin >> l1 >> r1 >> l2 >> r2;

    int sum = sumCalculate(matrix, l1, r1, l2, r2);
    cout << sum;

    return 0;
}