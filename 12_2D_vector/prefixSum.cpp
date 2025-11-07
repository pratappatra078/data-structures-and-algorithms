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
int sumCalculation(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2)
{
    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}
int main()
{
    int n, m;
    cout << "Enter the row and column : ";
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    cout << "Enter all elements of the matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int l1, r1, l2, r2;
    cout << "Enter the l1,r1 : ";
    cin >> l1 >> r1;
    cout << "Enter the l2,r2 : ";
    cin >> l2 >> r2;
    cout << "The Original Matrix is : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    int sum = sumCalculation(matrix, l1, r1, l2, r2);
    cout << "Sum = " << sum;

    return 0;
}
