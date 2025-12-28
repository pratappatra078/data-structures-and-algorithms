//where and how pop and push back function works .
#include <iostream>
using namespace std;

int main()
{
    string str = "Pratap";
    // push_back function add element in the last of string
    str.push_back('p');
    // pop back delete last character from last index .
    str.pop_back();
    // Append add word element at end of string .
    str.append(" Patra");
    // This function make the string clear
    cout << "The String is : ";
    cout << str << endl;
    cout << "After clear The String is : " << endl;
    str.clear();
    cout << str;
    //use plus operator to add string after the existing string ..
    cout <<"after using + operator ,The string is now : ";
    str = str + "Roll no 44 ." ;
    cout << str ;
    return 0;
}