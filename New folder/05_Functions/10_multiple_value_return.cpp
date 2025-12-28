#include <iostream>
#include <iostream>
using namespace std;

pair<int,int>calculate(int a,int b){
    return make_pair(a+b,a*b);
}
int main() {
    pair<int,int>result =calculate(2,3);
    cout << "The Sum of the Two value is "<< result.first<<endl;
    cout<< "The Product of the two value is "<<result.second<<endl;
    return 0;
}