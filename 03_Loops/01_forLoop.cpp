// Print hello world 'n' times . Take 'n' as input from user .

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number :";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Hello World !!" << endl;
    }

    return 0;
}

