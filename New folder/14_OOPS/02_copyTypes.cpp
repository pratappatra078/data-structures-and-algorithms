#include <bits/stdc++.h>
using namespace std;
/*
2 Types of copy exist in c++
shallow copy -> copy using data
deep copy -> copy using new address 

*/
class student
{
public:
    string name;
    double *cgpaPtr;

    student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    student(student &obj)
    {
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }
    void getInfo()
    {
        cout << "Name :  " << name << endl;
        cout << "CGPA : " << *cgpaPtr << endl;
    }
};
int main()
{
    student s1("Pratap", 8.4);
    student s2(s1);

    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;
    s2.name = "Sneha";
    s1.getInfo();
    s2.getInfo();
    return 0;
}