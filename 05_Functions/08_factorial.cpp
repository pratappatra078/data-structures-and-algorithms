#include <bits/stdc++.h>
using namespace std;
int fact(long long int num){
    if (num==0){
        return 1;
    }
    long long int result = 1;
    while(num){
        result = result * num;
        num--;
    }
    return result;
}
int main() {
    long long int num;
    cout << "Enter the Number : "<<endl;
    cin>>num;
    cout<<"The Factorial of the number is "<< fact(num)<<endl;
    return 0;
}