// print first n factorial numbers .
#include <iostream>
using namespace std;

int main()
{
    // code here
    int n = 5;
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        cout << factorial << " ";
    }
    cout << endl
         << "The factorial of " << n << " is " << factorial;
    return 0;
}