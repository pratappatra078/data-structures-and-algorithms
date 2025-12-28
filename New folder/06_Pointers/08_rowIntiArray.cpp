#include <iostream>  // Include the input-output stream library (needed for cout)
using namespace std; // Allows using names from the standard namespace directly (so we can write cout instead of std::cout)

int main() // Entry point of the program
{
    int a[] = {1, 2, 3};
    // Declare and initialize an integer array 'a' with 3 elements:
    // a[0] = 1, a[1] = 2, a[2] = 3
    // The name 'a' itself acts like a constant pointer to the first element (i.e., &a[0]).

    int (*p)[3] = &a;
    // 'p' is declared as a pointer to an array of 3 integers.
    // So, p points to the entire array 'a' (not just a single element).
    // &a has type "int (*)[3]" which matches p.
    // After this: p → &a (the address of the whole array).

    cout << p << " " << a << " " << *p << " " << *a;
    // Let's break this into 4 parts:

    // 1) p
    // Prints the value of 'p', i.e., the address of the whole array 'a'.
    // Note: &a and a are different:
    //   - a → pointer to first element (&a[0]), type int*
    //   - &a → pointer to the entire array, type int (*)[3]
    // But numerically, they usually print the same base address.

    // 2) a
    // Prints the address of the first element (a decays to int*).
    // This is effectively &a[0].
    // Numerically same as p, but type is int* (pointer to int).

    // 3) *p
    // Since p points to the whole array, *p dereferences p to get the array itself.
    // *p has type "int[3]" (array of 3 ints).
    // But in expressions, an array decays into a pointer to its first element.
    // So *p becomes int*, which points to the first element of 'a'.
    // Printing *p → prints the address of a[0].

    // 4) *a
    // 'a' is a pointer to the first element (int*).
    // Dereferencing it gives the actual value stored at a[0], which is 1.
    // So this prints: 1

    return 0; // Exit main with success status
}
