// Check if a given array is sorted or not
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(10);
    cout << "Enter all elements : ";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    bool sort = true;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i - 1] > v[i])
            sort = false;
    }
    if (sort)
        cout << "The enter vector is  sorted." << endl;
    else
        cout << "The enter vector is not sorted." << endl;

    return 0;
}