// Display this ap 4,7,10,13,16..... upto 'n' terms
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the n: ";
    cin >> n;

    // formula is an =a + (n-1)d where a = first number , n = how much number want to print ,d =  common difference .

    for (int i = 4; i <= 3 * n + 1; i += 3)
    {
        cout << i << " ";
    }
    // This method using extra one veriable and non-logical .

    // int first = 4;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << first  << " ";
    //     first += 3;
    // }
    return 0;
}