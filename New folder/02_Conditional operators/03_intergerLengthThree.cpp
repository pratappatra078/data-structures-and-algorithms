// Take positive integer input and tell if it three digit or not .

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter The Positive Number : ";
    cin >> number;

    if (number <= 0)
    {
        cout << "It's Not A positive Number " << endl;
        cout << "Please , Enter a positive number !! " << endl;
    }

    // else if (number > 99 && number < 1000)
    // {
    //     cout << "It is a three-digit number ."<<endl;
    // }
    // else
    // {
    //     cout << "It is not a Three digit number . "<<endl;
    // }
    else
    {
        string str = to_string(number);
        if (str.length() == 3)
        {
            cout << "It is a three-digit number ." << endl;
        }
        else
        {
            cout << "It is not a Three digit number . " << endl;
        }
    }
    return 0;
}
