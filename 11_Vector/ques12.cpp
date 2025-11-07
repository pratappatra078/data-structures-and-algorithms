// sort an array consisting only zero and one .
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortArray(vector<int> &v)
{
    int left = 0;
    int right = v.size() - 1;

    while (left < right)
    {
        if (v[left] == 1 && v[right] == 0)
        {
            v[left++] = 0;
            v[right--] = 1;
        }
        else if (v[left] == 0)
        {
            left++;
        }
        else if (v[left] == 1)
        {
            right--;
        }
    }
    return;
}

int main()
{
    int n;
    cout << "Enter The size of the array : ";
    cin >> n;

    vector<int> v;
    cout << "Enter the vectors Data : ";
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    sortArray(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
