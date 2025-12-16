#include <iostream>

// Include the set header file to use the STL set container.
#include<set>
using namespace std;

int main() {
    // Declare a set of integers named 'st'. 
    set<int> st;
    st.insert(1);
    st.insert(4);
    st.insert(3);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(1);

    // Print the size of the set.
    cout <<"The size of the set is : "<< st.size()<<endl;

    // Use a range-based for loop to iterate through the set.
    cout <<"All elements are ..."<<endl;
    for(auto itr:st){
        cout<<itr<<" ";
    }cout<<endl;

    return 0;
}