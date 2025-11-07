// given: 12321 Output : true
// given : 123421 output: false

#include <iostream>
using namespace std;

bool f(int number, int *temp)
{
    // base case hit at the top of the stack 
    if (number <= 9 and number >= 0)
    {
        int lastdigit = (*temp)%10;
        (*temp) /=10;
        return (number == lastdigit);
    }
    // Return 
    bool result = f(number/10,temp) and ((number%10)==(*temp)%10);
    (*temp) /=10;
    return result;

}

int main()
{
    int number = 1215;
    int sameNumber = number;
    cout << f(number, &sameNumber);
    return 0;
}