#include <iostream>
#include<list>
using namespace std;

int main() {
    // code here
    list<int> l1={1,2,3,4};

    auto itr1 =l1.begin(); // 
    auto itr2 = l1.end() ; // give the end value

    cout<<*itr1<<endl; // use start because iterator only store the address
    // cout<<*itr2<<endl; // use start because iterator only store the address

    // auto itr3 = l1.rbegin();
    // auto itr4 = l1.rend();

    // cout<<*itr3<<endl; // use start because iterator only store the address
    // cout<<*itr4<<endl; // use start because iterator only store the address

    // advance(itr1,1);
    // cout<<*itr1<<endl; 

    // iterator using range-baised loop
    // for(auto num:l1){
    //     cout<<num<< " ";
    // }
    // cout<<endl;

    // using iterator
    for(auto itr = l1.begin();itr!=l1.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;

    //reverse traversal
    // for(auto itr =l1.rbegin();itr!=l1.rend();itr++){
    //     cout<<*itr<<" ";
    // }
    cout<<endl;
    //inserting elements
    auto itr = l1.begin();
    auto l = l1.begin();
    auto r = l1.begin();
    advance(r,3);

    l1.insert(itr,l,r);
    //print
    for(auto itr = l1.begin();itr!=l1.end();itr++){
        cout<<*itr<<" ";
    }cout<<endl;

    // delete iteration
    auto s_itr = l1.begin();
    advance(s_itr,2);
    auto e_itr = l1.begin();
    advance(e_itr,5);

    l1.erase(s_itr,e_itr);
    //print
    for(auto itr = l1.begin();itr!=l1.end();itr++){
        cout<<*itr<<" ";
    }
    return 0;
}