// Print all the even numbers from 1 to 100 .

#include <iostream>
using namespace std;

int main()
{
    // This loop run 100 times 
     
    // for (int i = 0; i <= 100; i++)
    // {
    //     if(i%2==0) cout<<i<<" ";
    // }
    
    // return 0 ;
    
    // This loop run 50 times
    // same for less time 
    for (int i = 0; i <= 100; i+=2)
    {
        cout<<i<<" ";
    }
    
    return 0 ;
}