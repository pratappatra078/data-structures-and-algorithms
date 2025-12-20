#include <bits/stdc++.h>
using namespace std;

int main() {
    // Declear
    map<string ,long long int> phone_book;

    // for storing names in decending order
    // map<string ,long long int ,greater<string> > phone_book; 

    //Insert Value
    phone_book["Pratap"]= 767957784;
    phone_book["Siddhartha"]=7365056607;
    phone_book["Suvro"] =9800897247;
    phone_book["Bitan"]= 859753091;

    //Printing in accending order by name
    // for(auto ele:phone_book){
    //     cout<<"Name - "<<ele.first<<"   ||  Phone No. - "<<ele.second<<endl;
    // }

    //Printing in reverse order by name
    map<string,long long int> ::reverse_iterator itr;
    for(itr=phone_book.rbegin();itr!= phone_book.rend();itr++){
        cout<<itr->first<<"-"<<itr->second<<endl;
    }
    
    /*
    Note:
    inserting element takes (log n) time as it is implemented using Binary Search Tree . 
    */
    return 0;
}