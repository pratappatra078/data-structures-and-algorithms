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
int calculateTheSum(vector < vector <int> > &matrix ,int l1,int r1,int l2,int r2)
{
    // calculate pre-row wise 
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix[0].size(); j++)
        {
            matrix[i][j] += matrix[i][j-1];
        }
        
    }
    // calculating value pre-column wise 
    for (int i = 1; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            matrix[i][j] += matrix[i-1][j];
        }
        
    }
    // calculating squares areas logic 
    int top_left_sum =0,top_sum =0,left_sum=0;
    if(l1!=0) top_sum = matrix[l1-1][r2];
    if(r1!=0) left_sum = matrix[l2][r1-1];
    if(l1!=0 and r1 != 0) top_left_sum = matrix[l1-1][r1-1];

    // sum calculation
    int sum = 0;
    sum = matrix[l2][r2] - top_sum - left_sum + top_left_sum ;

    
    // printing values of the matrix 
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j]<<" ";
        }
        cout << endl;
    }
    return sum ;
    
}

int main()
{
    // taking input for declearing vector size
    int row, column;
    cout << "Enter the Row & Column : ";
    cin >> row >> column;

    // declearing vector and put value into it .
    cout << "Enter values of the matrix : " << endl;
    vector<vector<int>> matrix(row, vector<int>(column));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> matrix[i][j];
        }
    }

    //taking input for the area whom to calculate sum 
    int l1,r1,l2,r2;
    cout << "Enter the (l1,r2)  and (l2,r2): ";
    cin>> l1>>r1>>l2>>r2;

    int sum = calculateTheSum(matrix,l1,r1,l2,r2);
    cout << "sum = "<< sum;
    return 0;
}