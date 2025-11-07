// Given q queries , check check if the given number is present in the array or not .
// Note : value of all elements in the array is less than 10 to the power of 5.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter Array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    const int N = 1e5 + 10;
    vector<int> freq(N, 0);
    for (int i = 0; i < n; i++)
    {
        freq[v[i]]++;
    }

    int qurie;
    cout << "Enter no of qurie: ";
    cin >> qurie;
    while (qurie--)
    {
        int qurie_no;
        cout << "Enter Qurie : ";
        cin >> qurie_no;
        cout << freq[qurie_no] << endl;
    }

    return 0;
}