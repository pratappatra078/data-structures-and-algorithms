// what is the output of the following snippet ?
#include <iostream>
using namespace std;

int main()
{
    int course = 2;
    switch (course)
    {
    case 1:
        cout << "java";
        break;
    case 2:
        cout << "Python";
        break;
    default:
        cout << "Cpp";
        break;
    }
    return 0;
}