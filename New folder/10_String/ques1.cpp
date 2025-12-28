// input a string of even length and reverse the first half of the string .

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Pratappatra";
    int length_of_str = str.length() / 2;

    // for (int i = 0; i < (length_of_str - 1) / 2; i++)
    // {
    //     char temp = str[i];
    //     str[i] = str[length_of_str - i - 1];
    //     str[length_of_str - i - 1] = temp;
    // }
    // cout << str;
    // Complete 
    // reverse(str.begin(),str.begin() + length_of_str);
    return 0;
}