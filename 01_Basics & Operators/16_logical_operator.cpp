#include<iostream>
using namespace std;
int main()
{
    bool expression1 = true ;
    bool expression2 = false;

    // logical and(&&)
    cout << (expression1 && expression2) << endl;// 0

    // logical or(||)
    cout << (expression1 || expression2) << endl; // 1

    // logical not(!)
    cout << (!(expression1)) << endl; //0
    cout << (!(expression2)) << endl; //1

}