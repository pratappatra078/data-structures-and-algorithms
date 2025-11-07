//Print the table of n . Taking n as the input from the user.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Enter the number : ";
    cin >> n;

    for (int i = 1; i < 11; i++)
    {
        cout << n << " X " << i << " = "<< i*n << endl ;

    }
    
    return 0 ;
}