// Count the number of occurances of a particular element x
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(10);
    cout << "Enter all vector elements : "<< endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int x;
    cout << "Enter the key value :"<<endl;
    cin >> x;
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
            count++;
    }
    cout << "The numbers of occurance is :" << count << endl;

    return 0;
}