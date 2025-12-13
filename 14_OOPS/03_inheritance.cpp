#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    string name;
    int age;
};

class student : public person
{
public:
    int rollnum;
};

class GraduateStudent : public student
{
public:
    string researchArea;
};

int main()
{
    GraduateStudent s1;
    s1.name = "Pratap";
    s1.age = 20;
    s1.researchArea = "Quantum Criptography";
    s1.rollnum = 44;

    cout<<"Name : "<<s1.name<<endl;
    cout<<"Age : "<<s1.age<<endl;
    cout<<"roll Number : "<<s1.rollnum<<endl;
    cout << "Research Area : "<<s1.researchArea<<endl;
    return 0;
}