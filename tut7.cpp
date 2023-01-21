// C++ reference variables & Typecasting

#include<iostream>

using namespace std;

// Consider this global variable with the same name as local variable in main function:
int c = 14;

int main() {

    // ========== Built In Data Types ==========

    int a, b, c;

    cout << "Enter value of 'a': ";
    cin >> a;

    cout << "Enter value of 'b': ";
    cin >> b;
    
    c = a + b;

    cout << "The sum is : " << c << endl;

    // To print the global variable "c" we use ::, because local variables have percedence over global variables. If we dont use :: then we will get the value of local 'c' variable

    cout << "The value of global variable 'c' is : " << ::c << endl;

    // ========== Float, double and long double literals ==========

    // Consider the number 14.5. In C++ by default, the type of this number will be "long double" even if we declare it as a float, i.e. float num = 14.5;

    // --> Now, if you want this number to be treated as a float, you will have to put an 'f or F' at the end of the number like this, float num = 14.5f; 
    float num1 = 14.5f;

    // --> And if you want this number to be treated as a double (or long double), you will have to put an 'l or L' at the end of the number like this, float num = 14.5l; 
    long double num2 = 14.5l;

    cout << "The value of float 'num1' is : " << num1 << endl;
    cout << "The value of long double 'num2' is : " << num2 << endl;

    // sizeof() operator:
    cout << "--> Using the sizeof() operator: " << endl;
    cout << "The size of 14.5 is : " << sizeof(14.5) << endl;
    cout << "The size of 14.5f is : " << sizeof(14.5f) << endl;
    cout << "The size of 14.5F is : " << sizeof(14.5F) << endl;
    cout << "The size of 14.5l is : " << sizeof(14.5l) << endl;
    cout << "The size of 14.5L is : " << sizeof(14.5L) << endl;

    // ========== Reference Variables ==========

    // Simply, it means to refer a variable with one more name
    // Syntax: We use '&' such as below:
    float x = 123;
    float & y = x;
    cout << "The value of x is : " << x << endl;
    cout << "The value of refernce variable y (given refernce to x) is also : " << y << endl;

    // ========== Typecasting ==========
    // Typecasting means to change the type of a variable
    // You can convert any data type to another
    // Syntax : 1. int(variable_name)
    //          2. (int)variable_name

    float r = 123.55;
    int s = 123;
    cout << "The value of r (which is 123.55 by default) is now : " << int(r) << endl;
    cout << "The value of s (which is 123 by default) as a float is now : " << float(s) << endl;

    // Hence, in this way we can convert float into integer, integer into float, double into float and so on!

    return 0;
}