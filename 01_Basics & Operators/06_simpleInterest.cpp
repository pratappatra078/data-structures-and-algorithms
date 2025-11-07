// Simple interest calculation 
// formula is : (original * rate * time)/100

#include<iostream>
using namespace std;
int main()
{
    float principal  = 1000 ;
    float rate =30;
    float time = 3 ;
    float si = (principal*rate*time)/100 ;
    cout<<si<<endl ;
}