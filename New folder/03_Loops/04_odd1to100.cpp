// Print all the odd numbers from 1 to 100 .

#include <iostream>
using namespace std;

int main()
{
    // This loop runs 100 times 

    // for (int i = 0; i <= 100; i++)
    // {
    //     if(i%2!=0) cout<<i<<" ";
    // }

    // same for less time 
    // This loop runs 50 times 
    
    for (int i = 1; i <= 100; i+=2)
    {
        cout<<i<<" ";
    }
    
    return 0 ;
}