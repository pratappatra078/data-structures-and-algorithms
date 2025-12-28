// Display this gp 1,2,4,8,16,32....upto 'n' terms.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    long long int num = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << num << " ";
        num = num * 2;
    }

    return 0;
}