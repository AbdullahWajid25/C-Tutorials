// Functions and functions prototypes

#include<iostream>

using namespace std;

// Function prototype
// If we declare a function after the main() function and try to use it in the main(), we will get an error
// Function prototypes are used to tell the program that a specific function(with the specific parameters) is present in the program, go and find it, then the program will find that function and run it (with the argumets that we pass in the main() while invoking that function)
// Syntax : type function_name (type param1, type param2, type paramN);

// Now i will write a function prototype for my sum() function because it is declared after the main() and i will get an error if i dont write a function prototype for it :
// int sum(int a, int b); // acceptable
// int sum(int, int); // also acceptable
// int sum(int a, b); // not acceptable

int sum(int a, int b);
void hello(void);
// void sum(); // acceptable
// Void means that a function doesnt return a value

int main() {

    int num1, num2;

    // Functions :
    
    hello();
    cout << "\n";
    cout << "Using sum function to print sum" << endl;
    cout << "Enter num 1 : ";
    cin >> num1;
    cout << "Enter num 2 : ";
    cin >> num2;
    cout << "The sum is : " << sum(num1, num2);

    // Type of parameters :

    // 1. Actual params :
    //          Params that are passed when we invoke or call the function
    //          Here num1 and num2 are actual params :
    //              cout << "The sum is : " << sum(num1, num2);

    // 2. Formal params :
    //          Params that are made and used in the function
    //          Here a and b are actual params :
    //              int sum(int a, int b) { ... }

    return 0;
}

// This is a function :
int sum(int a, int b) {
    // Formal params take values from actual params
    int c = a + b;
    return c;
}

// This is also a function :
void hello() {
    // Its not important that a function should always return a value
    cout << "Hello World!";
}