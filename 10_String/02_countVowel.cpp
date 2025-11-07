//write a program to count the numbers of vowels in the given string .
#include <iostream>
using namespace std;

int main()
{
    string str = "Hey i am Jervis ! I am a ai .I  can do any calculation . ";
    int length_of_str = str.length();
    int vowel = 0;
    for (int i = 0; i < length_of_str; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            vowel += 1;
    }
    cout << vowel;

    return 0;
}