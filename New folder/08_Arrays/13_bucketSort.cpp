#include <bits/stdc++.h>
using namespace std;
/*
// scater and gather algorithm
TC : O(n^2)-> worst case , 0(n+k)->average case 
SC: O(n+k)
*/
void bucketSort(float arr[], int n)
{

    // initilising the
    vector<vector<float>> bucket(n, vector<float>());

    float max_ele = arr[0];
    float min_ele = arr[0];
    for (int i = 1; i < n; i++)
    {
        max_ele = max(max_ele, arr[i]);
        min_ele = min(min_ele, arr[i]);
    }
    float range = (max_ele - min_ele) / n;

    // initialising into the bucket
    for (int i = 0; i < n; i++)
    {
        int index = (arr[i] - min_ele) / range;
        float diff = (arr[i] - min_ele) / range - index;
        if (diff == 0 and arr[i] != min_ele)
        {
            bucket[index - 1].push_back(arr[i]);
        }
        else
        {
            bucket[index].push_back(arr[i]);
        }
    }

    // sorting indivisdual bucket
    for (int i = 0; i < n; i++)
    {
        if (!bucket[i].empty())
            sort(bucket[i].begin(), bucket[i].end());
    }

    // combining elements from bucket
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < bucket[i].size(); j++)
        {
            arr[k++] = bucket[i][j];
        }
    }
}
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    float arr[n];
    cout << "Enter all elements ........" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bucketSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}