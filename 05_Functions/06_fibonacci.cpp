#include <bits/stdc++.h>
using namespace std;
int factorial(int num){
    
    if(num==0) return 0;
    if (num==1) return 1;
    if (num==2) return 1;
    num = num-2;
    int num1 = 0;
    int num2 = 1;
    for(int i = 0;i<num;i++){
        int num3 =  num1+num2;
        num1 = num2;
        num2 = num3;
    }
    return num2;
}
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The factorial of "<<n<<" is "<<factorial(n);
    return 0;
}