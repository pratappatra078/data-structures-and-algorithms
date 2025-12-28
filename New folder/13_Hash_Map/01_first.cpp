#include <bits/stdc++.h>
using namespace std;

int main() {
    // code here
    int n;
    cout << "Enter n : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Precompute 
    int hash[13] ={0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    
    int q ;
    cout << "Enter the number of quesry : ";
    cin >> q;
    while(q--){
        int num;
        cout << "Enter the number : ";
        cin >> num;
        cout << hash[num] << endl;
    }
    
    return 0;
}