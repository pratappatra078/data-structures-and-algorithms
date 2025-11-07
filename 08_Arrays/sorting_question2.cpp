// Give an fruitay of names of the fruits; you are supposed to sort it in lexicographical order using the selection sort.
// Input : ["papaya","lime","watermelon","apple","mango","kiwi"]
// Output: ["apple","kiwi","lime","mango","papaya","watermelon"]

#include <bits/stdc++.h>
using namespace std;
// TC :O(n^2)
// SC : O(1)
void f(char fruit[][60], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // finding minimum element
        int minimum_index = i;
        for (int j = i+1; j < n; j++)
        {
            if (strcmp(fruit[minimum_index], fruit[j]) > 0)
            {
                minimum_index = j;
            }
        }
        // swap if values are not same
        if (minimum_index != i)
        {
            swap(fruit[i], fruit[minimum_index]);
        }
    }
}
int main()
{
    // code here
    char fruit[][60] = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};
    int n = sizeof(fruit) / sizeof(fruit[0]);
    f(fruit, n);
    for (int i = 0; i < n; i++)
    {
        cout << fruit[i]<<" ";
    }
    return 0;
}