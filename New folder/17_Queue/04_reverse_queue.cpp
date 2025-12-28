// reverse the element of a queue
#include<iostream>
#include<queue>
#include<stack>

using namespace std;
int main(){

    queue<int> qu1;
    qu1.push(1);
    qu1.push(2);
    qu1.push(3);
    qu1.push(4);
    qu1.push(5);
    qu1.push(6);
    qu1.push(7);
    cout << "Original values : "<<endl;
    cout<<"qu1 = [1 2 3 4 5 6 7 ]"<<endl;
    // qu1 = [1 2 3 4 5 6 7 ]
    stack<int> temp;
    while(!qu1.empty()){
        temp.push(qu1.front());
        qu1.pop();
    }
    // temp = [1 2 3 4 5 6 7]
    // qu1 = [] 

    while(!temp.empty()){
        qu1.push(temp.top());
        temp.pop();
    }
    // temp =[]
    //qu1 =[7 6 5 4 3 2 1]
    // temp = []


    // print all values
    cout <<"After revering all queue , "<<endl;
    while(!qu1.empty()){
        cout<<qu1.front()<<" ";
        qu1.pop();
    }
    return 0;
}