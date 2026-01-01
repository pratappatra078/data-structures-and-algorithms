#include <iostream>
using namespace std;

int main()
{
    int num1 = 4;
    int num2 = 2;

    // addition operator(+)
    cout << num1 + num2 << endl; // 6

    // subtraction operator (-)
    cout << num1 - num2 << endl; // 2

    // multiplication operator (*)
    cout << num1 * num2 << endl; // 8

    // division operator (/)
    cout << num1 / num2 << endl; // 2

    // modulus operator(%)
    cout << num1 % num2 << endl; // 0

    // increment operator (++)
    num1++;
    cout << num1 << endl; // 5
    num2++;
    cout << num2 << endl; // 3

    // Decrement operator (--)
    num1--;
    cout << num1 << endl; // 4
    num2--;
    cout << num2 << endl; // 2
}