// given a point (x,y) .write a program to find out if it lies on 1st , 2nd , 3rd or 4th quadrant is the x axis , y axis or at the origin .

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter the point(X,Y): ";
    cin >> x >> y;

    if (x > 0)
    {
        if (y > 0)
        {
            cout << "It is in 1st quardrant .";
        }
        else
        {
            cout << "It is in 4th quardrant .";
        }
    }
    else if (x == 0 || y == 0)
    {
        if (x == 0)
        {
            if (y == 0)
            {
                cout << x <<":"<< y << "is in the origin";
            }
            
        }
    }

    else
    {
        if (y > 0)
        {
            cout << "It is in 2st quardrant .";
        }
        else
        {
            cout << "It is in 3st quardrant .";
        }
    }

    return 0;
}