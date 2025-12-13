#include <iostream>
using namespace std;
void print1(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}
void print2(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}
void print3(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j ;
        }
        cout << endl;
        
    }
    
}
void print4(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i ;
        }
        cout << endl;
    }
}
void print5(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i +1; j++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
    
}
void print6(int n ){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n -i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    
}
void print7(int n){
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= n -i +1; j++)
        {
            cout << " ";
        }
        
        // star
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout << "*";
        }
        

        // space
        for (int j = 1; j <= n -i +1; j++)
        {
            cout << " ";
        }

        // new line 
        cout << endl;
    }
    
}
void print8(int n){
    for (int i = 1; i <= n; i++)
    {
        //space
        for (int j = 1; j <= n - i+1; j++)
        {
            /* code */
        }
        
        // star
        for (int j = 1; j <= 2*(n-i)+1; j++)
        {
            cout <<  "*";
        }
        
        // space

        // new line
        cout << endl;
    }
    
}
int main() {
    
    int t =5;
    print7(t);
    return 0;
}