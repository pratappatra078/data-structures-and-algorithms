// write a Program to Print + Pattern Given below

#include <iostream>
using namespace std;

int main()
{
    // code here
    int n;
    cout << "Enter the number :";
    cin >> n;

    int majher = n / 2 ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == majher) || (j == majher))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}