#include <iostream>
using namespace std;
void print1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void print4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void print5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void print7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // space Print
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }

        // star Print
        for (int j = 1; j <= n * 2 - (2 * i - 1); j++)
        {
            cout << "*";
        }

        // space Print
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }

        // new line
        cout << endl;
    }
}
void print9(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        // space Print
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }

        // star Print
        for (int j = 1; j <= n * 2 - (2 * i - 1); j++)
        {
            cout << "*";
        }

        // space Print
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }

        // new line
        cout << endl;
    }
}
void print10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (stars > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print11(int n)
{
    int print = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << print << " ";
            print = 1 - print;
        }
        cout << endl;
    }
}
void print12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // number Print
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        // space print
        for (int j = 1; j <= (2 * n) - (2 * i); j++)
        {
            cout << "  ";
        }

        // number print
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}
void print13(int n)
{
    int value = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << value++ << " ";
        }
        cout << endl;
    }
}
void print14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i - 1; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void print15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + n - i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void print16(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char printchar = 'A' + i - 1;
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << printchar << " ";
        }
        cout << endl;
    }
}
void print17(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // Space printing
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // character printing
        char ch = 'A';
        int breakpoint = (2 * i - 1) / 2;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }

        // space printing
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print18(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = i; j > 0; j--)
        {
            char ch = 'A' + n - j;
            cout << ch;
        }
        cout << endl;
    }
}
void print19(int n)
{
    int space = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        // stars
        for (int j = 1; j <= ((n / 2) - i + 1); j++)
        {
            cout << "*";
        }

        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        space += 2;

        // stars
        for (int j = 1; j <= ((n / 2) - i + 1); j++)
        {
            cout << "*";
        }

        // next line
        cout << endl;
    }
    space = space - 2;

    for (int i = 1; i <= n / 2; i++)
    {
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // space
        for (int j = space; j > 0; j--)
        {
            cout << " ";
        }
        space -= 2;

        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // next line
        cout << endl;
    }
}
void print20(int n)
{
    for (int i = 1; i <= n / 2; i++)
    {
        // space
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // star
        for (int j = 0; j < n - (i * 2); j++)
        {
            cout << " ";
        }

        // space
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // new line
        cout << endl;
    }
    int space = 2;
    for (int i = (n / 2) + 1; i < n; i++)
    {
        // star
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        space += 2;

        // star
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        // new line
        cout << endl;
    }
}
void print21(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
void print22(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int bottom = (2 * n - 2) - i;
            cout << (n - min(min(top, bottom), (min(left, right)))) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t = 4;
    print22(t);
    return 0;
}