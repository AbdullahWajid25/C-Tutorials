// Constants, manipulators & Operator percedence

#include<iostream>

#include<iomanip>
// The above headerfile is used in this file to get the C++ manipulator 'setw'

using namespace std;

int main() {
    // ========== Constants ==========
    // Those variables whose value is fixed and can not be changed
    // Syntax: const int a = 14;
    cout << "--> Constants :" << endl;
    const int age = 14;
    // age = 15; // Error
    cout << "My age is : " << age << endl;

    // ========== Manipulators ==========
    // Used to format code, or simply control how your data is being displayed
    cout << "--> Manipulators :" << endl;

    // 1. endl = endline = Ends the line, making the next thing print in a new line:
    cout << "My friend is Daniyal" << endl;
    cout << "My name is Abdullah" << endl;

    // 2. setw = set width = Used to justify things to the right = This manipulator is being used from the iomanip headerfile:
    int a = 4;
    int b = 14;
    int c = 124;
    cout << "The value of a without setw is : " << a << endl;
    cout << "The value of b without setw is : " << b << endl;
    cout << "The value of c without setw is : " << c << endl;
    // Using setw:
    cout << "The value of a setw is : " << setw(3) << a << endl;
    cout << "The value of b setw is : " << setw(3) << b << endl;
    cout << "The value of c setw is : " << setw(3) << c << endl;

    // ========== Operator precedence ==========
    cout << "--> Operator precedence :" << endl;

    // Precedence means that which expression will be evaluated first
    // We can get the operator precedence info from the en.cppreference website
    int x = 3, y = 4;

    // In the below example, the expression will be evaluated from left to right. First multiplacation after that addition and subtraction:
    int z = ( ( ( x * 5 ) - 5 ) + y );

    cout << "The value of c is : " << z;

    return 0;
}