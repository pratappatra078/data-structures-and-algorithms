// Take 3 numbers input and tell if they can be the sides of a traingle

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter 3 sides of Traingle : ";
    cin >> num1 >> num2 >> num3;
    if (num1 <= 0 || num2 <= 0 || num3 <= 0)
    {
        cout << "Please Enter Valid Sides !!";
    }
    else if ((num1 + num2 > num3) &&
             (num2 + num3 > num1) &&
             (num1 + num3 > num2))
    {
        cout << "Valid Traingle !! ";
    }
    else
    {
        cout << "Invalid traingle !! ";
    }
}