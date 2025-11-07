// Take positive integer input and tell if it is devisable by 5 and 3
#include <iostream>
using namespace std;
int main()
{
    int positive_integer;
    cout << "Enter A Positive integer : ";
    cin >> positive_integer;

    if (positive_integer < 0)
    {
        cout << "Please Enter A Valid number : ";
    }
    else
    {
        if (positive_integer % 5 == 0 && positive_integer % 3 == 0)
        {
            cout << "Devisable by 5 and 3";
        }
        else if (positive_integer % 5 == 0)
        {
            cout << "Devisable by 5";
        }
        else if (positive_integer % 3 == 0)
        {
            cout << "Devisable by 3";
        }
        else
        {
            cout << "This number is not devisable by 3 or 5 ";
        }
    }
}