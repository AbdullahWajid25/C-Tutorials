// Headerfiles and Operators

// There are two types of header files :

// 1. System header files : Comes with the compiler
#include<iostream>

// 2. User defined header files : Written by the programmer 
// #include"userDefinedHeaderFile.h"
// This header file should be in the same directory with the same name, or it will cause an error.

// Header files can be found from cppreference.com website.

using namespace std;

int main() {
    // Operators
    
    int a = 5, b = 7;

    // 1. Arithematic operators :
    cout << "--> Arithematic operators :" << endl;
    cout << "The value of a + b is : " << a + b << endl;
    cout << "The value of a - b is : " << a - b << endl;
    cout << "The value of a * b is : " << a * b << endl;
    cout << "The value of a / b is : " << a / b << endl;
    cout << "The value of a % b is : " << a % b << endl; // % = MOD = Remainder in division
    cout << "The value of a++ is : " << a++ << endl; // Print first, increment later
    cout << "The value of a-- is : " << a-- << endl; // Print first, decrement later
    cout << "The value of ++a is : " << ++a << endl; // Increment first, print later
    cout << "The value of --a is : " << --a << endl; // Decrement first, print later

    // 2. Assignment operator:
    // Used to assign value to a variable
    int c = 14;

    // 3. Comparison Operators:
    cout << "--> Comparison operators :" << endl;
    cout << "The value of a == b is : " << ( a == b ) << endl;
    cout << "The value of a != b is : " << ( a != b ) << endl;
    cout << "The value of a > b is : " << ( a > b ) << endl;
    cout << "The value of a < b is : " << ( a < b ) << endl;
    cout << "The value of a >= b is : " << ( a >= b ) << endl;
    cout << "The value of a <= b is : " << ( a <= b ) << endl;

    // 4. Logical operators:
    cout << "--> Logical operators :" << endl;
    cout << "(AND operator) value of ( ( a == b ) && ( a != b ) ) is : " << ( ( a == b ) && ( a != b ) ) << endl; // For AND operator, all conditions should be true
    cout << "(OR operator) value of ( ( a == b ) || ( a != b ) ) is : " << ( ( a == b ) || ( a != b ) ) << endl; // For OR operator, any one condition should be true
    cout << "(NOT operator) value of ( !( a == b ) ) is : " << ( !( a == b ) ) << endl; // NOT operator negates the value, i.e. true[1] becomes false[0] and vice versa

    return 0;
}