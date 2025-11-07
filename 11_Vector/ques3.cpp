// count no of varibles stricly greater than x
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(10);
    cout << "Enter the 10 values of vector : ";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int x;
    cout << "Enter key value : ";
    cin >> x;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > x)
            cout << v[i] << " ";
    }

    return 0;
}