// Find the last occurence of an element x in an given array .
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(6);
    cout << "All vector all elements : ";
    for (int i = 0; i < 6; i++)
    {
        cin >> v[i];
    }
    int x;
    cout << "Enter X : ";
    cin >> x;

    int occurenceIndex = -1;
    for (int i = v.size(); i >= 0; i--)
    {
        if (v[i] == x)
        {
            occurenceIndex = i;
            break;
        }
    }
    cout << occurenceIndex + 1;

    return 0;
}