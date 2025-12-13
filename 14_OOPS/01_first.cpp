#include <bits/stdc++.h>
using namespace std;


class Teacher
{
private:
    double salary;

public:
    // non-parameterized constructor
    Teacher()
    {
        dept = "Commputer Science Engineering";
    }

    // Parameterized
    Teacher(string n, string d, string s, double sal)
    {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    string name;
    string dept;
    string subject;

    void getInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Depertment : " << dept << endl;
    }
};

int main()
{
    Teacher t1("Pratap", "Computer Science Engineering", "c++", 250000);

    Teacher t2(t1); // copy t1 into t2
    t2.getInfo();
    return 0;
}