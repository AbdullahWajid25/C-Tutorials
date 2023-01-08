// Variable scope and data types

#include<iostream>

using namespace std;

int global_variable = 100;

int sum() {
    // Updating value of global variable made outside the sum function and this variable is accessable and usable in the whole program:
        global_variable = 98;

    // This variable cant be used anywhere else except in this function:
        int local_variable = 101;

    //! Note: Local variables gain percendence over global variables:
    cout << "\n" << global_variable;
}

int main() {
    // Making variables:

    // Integer:
        int age = 14;
        int dogAge = 30;
        int num1 = 10, num2 = 4;

    // Float:
        float pi = 3.14;

    // Character:
        char characterA = 'a';

    // Boolean:
        // False = 0, True = 1
        bool haveLaptop = true; // prints 1

    cout << "My age is : "<< age << "\nValue of pi is : " << pi << "\nThe character is : " << characterA << "\nDo i have a laptop : " << haveLaptop << "\nSum of num1 and num2 is : " << num1 + num2;

    sum();

    return 0;
}