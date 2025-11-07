// Given an array of integers of n size . Answer q queries where you need to print sum of values in a given range of indices from l to r (both included )
// NOTE : the values of l and r in queries follow 1-base indexing .
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // intialization of array
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    // data input in array
    vector<int> v(n + 1, 0);
    cout << "Enter the elements of the array :";
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    // calculate prefix sum of its values into its index .

    for (int i = 1; i <= n; i++)
    {
        v[i] += v[i - 1];
    }

    int q;
    cout << "Enter number of qurie you want to ask ? ";
    cin >> q;

    while (q--)
    {
        int first, last;
        cout << "Enter first & last index : ";
        cin >> first >> last;
        int answer;
        answer = v[last] - v[first - 1];
        cout << answer << endl;
    }
    return 0;
}
