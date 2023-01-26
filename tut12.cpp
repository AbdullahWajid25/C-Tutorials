// Pointers 

#include<iostream>

using namespace std;

int main() {
    // Pointer 
    // Its a data type that holds address of other data types

    int a = 3;
    int* b = &a;

    // & - (Address of) operator - Gives the address of the data type/variable
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;

    // * - (Value at) deference operator
    cout << "The value at address a is " << a << endl;
    cout << "The value at address b is " << *b << endl;

    return 0;
}