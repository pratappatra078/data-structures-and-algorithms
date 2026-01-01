// Given the length and bridth of an rectangle write a program to check whether the area of the rectangle is greater than its parameter .

#include <iostream>
using namespace std;
int main()
{
    int length, width;
    cout << "Enter The length : ";
    cin >> length;

    cout << "Enter The Width : ";
    cin >> width;

    if ((length * width) > 2 * (length + width))
    {
        cout << "Area is greater .";
    }
    else if ((length * width) < 2 * (length + width))
    {
        cout << "Perameter is greater .";
    }
    else
    {
        cout << "Area and Perimeter is equal . ";
    }
}