// given an array of integers 'a',,move all even integers at the begining of the array followed by all the odd integers .The relative order of odd or even integers does not matter .Return any array that satisfy all the conditions.

#include <iostream>
#include <vector>
using namespace std;
void sortVector(vector<int> &v)
{
    int left_index = 0;
    int right_index = v.size();
    while (left_index < right_index)
    {
        if (v[left_index] % 2 == 1 && v[right_index] % 2 == 0)
        {
            swap(v[left_index], v[right_index]);
            left_index++;
            right_index--;
        }
        else if (v[left_index] % 2 == 0)
        {
            left_index++;
        }
        else if (v[right_index] % 2 == 1)
        {
            right_index--;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the size : ";
    cin >> n;

    vector<int> v;
    cout << "Enter all the elements : ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sortVector(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}