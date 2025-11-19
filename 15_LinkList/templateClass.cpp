#include <bits/stdc++.h>
using namespace std;

// this is called as template 
template<typename T>

// this class is called as template class
class Node{
public:
    T val;
    Node* next ;
    Node( T data){
        val = data;
        next = NULL;        
    }
};

int main() {
    // for int values 
    Node<int>* node1 = new Node<int>(3);
    cout << node1->val<<endl;

    // for char values 
    Node<char>* node2 = new Node<char>('p');
    cout<< node2->val<<endl;
    return 0;
}