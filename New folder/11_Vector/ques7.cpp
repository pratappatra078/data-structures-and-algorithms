// count the numbers of triplets whose sum is equal to the given value x

#include <iostream>
using namespace std;

int main()
{
    // code here
    int arr[] = {3, 1, 2, 4, 0, 6};
    int target = 6;

    int length = sizeof(arr) / sizeof(arr[0]);
    int pair = 0;

    for (int i = 0; i < length - 3; i++)
    {
        for (int j = i + 1; j < length - 2; j++)
        {
            int find = target - (arr[i] + arr[j]);
            for (int k = j + 1; k < length - 1; k++)
            {
                if (arr[k] == find)
                {
                    pair++;
                    break;
                }
            }
        }
    }
    cout << pair;

    return 0;
}