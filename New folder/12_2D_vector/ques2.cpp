/*
n = 3
matrix :
1 2 3
4 5 6
7 8 9
rotate the given matrix by 90 Degree .

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rotateArray(vector<vector<int>> &v)
{
    // transpose 
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(v[i][j] , v[j][i]);
        }
        
        
    }
    for (int i = 0; i < n; i++)
    {
        reverse(v[i].begin(),v[i].end());
    }
    return ;
    
    // reverse
}
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < n; j++)
        {
                cin >> v[i][j];
        }
        
    }
    rotateArray(v);
    cout << "After Rotating array by 90 Degree \nThe matrix is : \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
        
    }
    

    return 0;
}