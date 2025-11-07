// If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss or no profit no loss. Also determine how much profit he made or loss he incurred.

#include <iostream>
using namespace std;
int main()
{
    int cost_price, selling_price;
    cout << "Enter The cost Price : ";
    cin >> cost_price;
    cout << "Enter The Selling Price : ";
    cin >> selling_price;
    if (cost_price > selling_price)
    {
        cout << "You have loss of " << (cost_price - selling_price) << endl;
    }
    else if (cost_price < selling_price)
    {
        cout << "You have Profit of " << (selling_price - cost_price) << endl;
    }
    else 
    {
        cout << "You Have no loss and no profit ."<< endl;
    }
}