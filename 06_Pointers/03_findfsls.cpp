// Given string str = "aabaac" . find the first and last index of 'a'. output : 0 4
#include <iostream>
using namespace std;

void findindex(string str, char ch, int *first, int *last)
{
    // loop to find the first index
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ch)
        {
            *first = i;
            break; // if find break the statement
        }
    }

    // loop to find the last index
    for (int i = str.size(); i > 0; i--)
    {
        if (str[i] == ch)
        {
            *last = i;
            break; // if find break the statement
        }
    }
}
int main()
{
    // given string and the char which is to be find
    string str = "aabaac";
    char ch = 'a';
    // take to integer to store index
    int first = -1;
    int last = -1;
    // called the functon
    findindex(str, ch, &first, &last); // first and last veriable's location is send to the function
    cout << first << " " << last;
    return 0;
}
