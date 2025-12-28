#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int,string> mp;
    mp[10]="Shyam";
    mp[9]="kali";
    mp[5]="five";
    mp[2]="akash";
    mp[8]="eight";

    for(auto ele:mp){
        cout<<"Roll No- "<<ele.first<<" Name: "<<ele.second<<endl;
    }
    return 0;
}