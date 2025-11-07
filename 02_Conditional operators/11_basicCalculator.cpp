// Write a program to create a calculator that perform besic arithmetic operator ( add,subtract,multipliply and devide) using switch case . The calculator should input two number and one arithmetic operator .

#include <iostream>
using namespace std;

int main()
{
    double num1, num2, result;
    char oper;

    cout << "Enter the equation (e.g. 1+2) :  ";
    cin >> num1 >> oper >> num2;

    switch (oper)
    {
    case '+':
        result = num1 + num2;
        cout << num1 << oper << num2 << " = " << result;
        break;
    case '-':
        result = num1 - num2;
        cout << num1 << oper << num2 << " = " << result;
        break;
    case '*':
        result = num1 * num2;
        cout << num1 << " X " << num2 << " = " << result;
        break;
    case '/':
        if (num2 == 0)
        {
            cout << "You cannot devide" << num1 << " by Zero.";
            break;
        }
        else
        {
            result = num1 / num2;
            cout << num1 << oper << num2 << " = " << result;
        }
        break;
    default:
        cout << "Error ! Invalid operator .";
        break;
    }
    return 0;
}