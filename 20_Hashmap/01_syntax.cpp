/*
Time Complexity:
    addkey    -> average Θ(1), worst O(n)
    search    -> average Θ(1), worst O(n)
    deletekey -> average Θ(1), worst O(n)

Space Complexity: O(n + b)
    n = number of keys
    b = number of buckets
*/
#include <iostream>
#include <vector>
#include<list>
#include<algorithm>

using namespace std;
class Hashing{
    vector<list<int> >hashtable;
    int buckets;
public:
    Hashing(int size){
        buckets =  size;
        hashtable.resize(size);
    }

    int hashvalue(int key){
        return key%buckets;
    }

    void addkey(int key){
        int idx = hashvalue(key);
        hashtable[idx].push_back(key);
    }
    list<int>::iterator search(int key){
        int idx = hashvalue(key);
        return find(hashtable[idx].begin(),hashtable[idx].end(),key);
    }
    void deletekey(int key){
        int idx = hashvalue(key);
        if(search(key) != hashtable[idx].end()){
            hashtable[idx].erase(search(key));
            cout <<key <<" is deleted ."<<endl;
        }
        else{
            cout <<"Key is not Present in the hashtable."<<endl;
        }
    }
};
int main() {
    Hashing h(10);
    h.addkey(10);
    h.addkey(20);
    h.addkey(30);
    h.addkey(40);

    h.deletekey(50);
    h.deletekey(40);
    return 0;
}