// Take input percentage of a student of a student and print grade according to its .
// 81-100 -> very good
// 61-80 -> good
// 41-60 -> average
// 0-40 -> fail

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter The Number : ";
    cin >> num;
    if (num >= 0 and num <= 100)
    {
        if (num >= 80)
        {
            cout << "Your grade is : Very Good .";
        }
        else if (num >= 60)
        {
            cout << "Your grade is : Good .";
        }
        else if (num >= 40)
        {
            cout << "Your grade is : average .";
        }
        else if (num >= 0)
        {
            cout << "Your grade is : fail .";
        }
    }
    else
    {
        cout << "Please Enter valid number !! ";
    }
}