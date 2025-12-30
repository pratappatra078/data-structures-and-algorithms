// STL -> Standerd templete Library
#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << ' ' << p.second << endl;

    pair<int, pair<int, int>> q = {4, {5, 6}};
    cout << q.first << " " << q.second.first << " " << q.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second;
}

void explainVector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v1(5, 100);
    vector<int> v2;

    vector<int> v3(5, 20); // create vector and filled wil 20 in all 5 places
    vector<int> v4(v3);    // copy vector v3 -> v4

    // acctess elements in vector
    vector<int>::iterator temp = v3.begin();
    temp++; // for moving pointer by 1
    cout << *(temp) << " ";

    temp += 2; // for moving Pointer by 2
    cout << *(temp) << " ";

    vector<int>::iterator temp1 = v.end(); // Point the next location of the last element in the vector

    // These two are mostly no use
    // vector<int>:: iterator temp2 =v3.rend();
    // vector<int>::iterator temp3 =v3.rbegin();

    // Printing Elements in vector
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it : v)
    {
        cout << it << " ";
    }

    // delete elements from vector

    // v =[10,20,30,40]
    v.erase(v.begin() + 1); // after erase [10,30,40]

    // v = {10,20,30,40,50,60}
    v.erase(v.begin() + 2, v.begin() + 4); // after delete {10,20,60}

    // insert function
    vector<int> v(2, 100);    // {100,100}
    v.insert(v.begin(), 300); //{300,100,100};

    v.size();     // size
    v.pop_back(); // remove one element
    v1.swap(v2);  // swap vector v1={1,2} v2 ={3,4} after v1={3,4} v2={1,2}
    v.clear();
    cout << v.empty();
}
void explainList()
{
    list<int> lis;
    lis.push_back(5);
    lis.emplace_back(6);
    lis.push_front(40);
    lis.emplace_front(30);
}
void explainDeque()
{
    deque<int> de;
    // all same
}
void explainStack()
{
    stack<int> st;
    st.push(5);
    st.push(2);
    st.push(3);
    st.push(1);
    st.push(9);
    st.emplace(6);

    cout << st.top(); // Print last enqueue value

    st.pop();
    cout << st.top();
    cout << st.size();
    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);
}
void explainQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back() += 5;
    cout << q.back();
    cout << q.front();
    q.pop();
    cout << q.front();
}
void explainPriorityQueue()
{
    // Min heap
    priority_queue<int> pq; // default : store large elements at top
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(3);

    cout << pq.top();
    pq.pop();
    cout << pq.top();
    // Max heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(1); // time complexity : O(logn)
    pq.push(8);
    pq.push(15);
    pq.pop(); // time complexity : O(logn)
    pq.emplace(81);
    cout << pq.top(); // time complexity : O(1)
}
void explainSet()
{
    // set -> sorted and unique
    // all takes log n time
    set<int> st;
    st.insert(1);
    st.insert(5);
    st.insert(15);
    st.insert(4);
    st.emplace(3);

    auto it = st.find(1); // find 1 in the  set if doesnot ind then return after the
    auto it = st.find(6);

    st.erase(5);

    int cnt = st.count(5); // only give one or zero

    auto it = st.find(3);
    st.erase(it); // constant time

    // erase multiple
    auto it1 = st.find(2);
    auto it2 = st.find(5);
    st.erase(it1, it2); // it will delete all elements from 2 value index to 5 value index

    // Upper bound and lower bound
    auto it = st.upper_bound(2);
    auto it = st.lower_bound(5);
}
void explainMultiset()
{
    // everything same as set
    // add same value for multiple time
    //  after taking value it sort
    //  when delete one value all the value will be delete
    multiset<int> mul;
    mul.insert(1);
    mul.insert(1);
    mul.insert(1);
    mul.insert(2);
    mul.insert(2);
    mul.insert(5);

    mul.erase(1); // it will delete all the occourance of 1

    int cnt = mul.count(1); // count no of 1 in the multiset
    mul.erase(mul.find(1)); // find the address of first one and delete the first one only
    mul.erase(mul.find(1), mul.find(1 + 2));
}
void explainUnordered()
{
    unordered_set<int> un;
    // normally store all the values and don't sort all in order
    // store unique
}
void explainMap()
{
    map<int, int> mpp;
    mpp[1] = 2;
    mpp[3] = 4;
    mpp.insert({2, 3});
    mpp.insert({6, 9});

    map<pair<int, int>, int> mp;
    mp[{2, 3}] = 10;
    // access all elements in map using loop
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1];
    // if the element doesn't exist then it will Print null 
    cout << mpp[2]; // Print only the 2 index element

    auto it = mpp.find(3);
    // cout << *(it).second;

    
}

int main()
{
    explainMap();
    return 0;
}