// "Cherry’s birthday is coming this month! She wants to plan a Birthday party and is preparing an invite list with her friend Aashi. She asks Aashi to tell her names to add to the list.
// Aashi is a random guy and keeps coming up with names of people randomly to add to the invite list, even if the name is already on the list! Cherry hates redundancy and hence, enlists the names only once.
// Find the final invite-list, that contain names without any repetition."

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    set<string> invite_list;
    cout<<"Enter the number of People : "<<endl;
    int n ;
    cin >> n;
    cout <<"Enter all the names : "<<endl;
    while(n--){
        string str ;
        cin >> str;
        invite_list.insert(str);
    }

    cout <<"the final invite-list, that contain names without any repetition are..."<<endl;
    for(auto it:invite_list){
        cout <<it<<" ";
    }cout <<endl;

    return 0;
}