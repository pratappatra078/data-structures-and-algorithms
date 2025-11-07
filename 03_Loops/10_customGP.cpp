//Display this gp 3,12,48...upto 'n' terms .

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter terms number : ";
    cin>> n;
    long long int a = 3;

    for (int i = 1; i < n; i++)
    {
        cout << a << " " ;
        a = a*4;
    }
    return 0 ;
}