// Take positive integer input and tell if it is devisable by 5 and 3 and 15
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter A Positive integer : ";
    cin >> num;

    if (num <= 0)
    {
        cout << "Please Enter A Valid number : ";
        return 0 ;
    }
    else if (num % 15 == 0)
    {
        cout << num << " can be divisible by 3,5 and 15";
    }
    else if (num % 5 == 0)
    {
        cout << num << " can be divisible by 5 ";
    }
    else if (num % 3 == 0)
    {
        cout << "divisible by 3";
    }

    else
    {
        cout << "This number is not divisible by 3 ,5 or 15";
    }
}