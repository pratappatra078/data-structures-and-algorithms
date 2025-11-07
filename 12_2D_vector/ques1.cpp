/*
given a boolean 2d array where each row is sorted .find thw row with the maximum number of 1s.
input row : 3 Column : 4

matrix :
0 1 1 1
0 0 1 1
0 0 0 1
*/
#include <iostream>
#include <vector>
using namespace std;
int maximumOneRow(vector<vector<int>> &v)
{
    int maxOnes = INT8_MIN;
    int maxOnesRow = -1;
    int column = v[0].size();

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == 1)
            {
                int maxindex = column - j;
                if (maxindex > maxOnesRow)
                {
                    maxOnesRow = i;
                }
                break;
            }
        }
    }
    return maxOnesRow;
}
int main()
{
    // code here
    int n,m;
    cout << "Enter row and Column : ";
    cin >> n >> m;

    vector<vector<int>> vec(n, vector<int>(m));
    cout << "Enter The elements : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
    }
    int res = maximumOneRow(vec);
    cout << res;

    return 0;
}