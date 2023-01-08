// Basic Input / Output and 

#include<iostream>

using namespace std;

int main() {
    // Inputs & Outputs :

    int num1, num2;

    // '<<' is insertion operator, means to insert everything on the output device (display) that the user enters.
    // '>>' is extraction operator, means to extract (take input) from the user and play with it in your program.

    cout << "Hello there!\n";

    cout << "Enter the value of num 1 :\n";
    // Taking input by using 'cin>>' function:
    cin >> num1;

    cout << "Enter the value of num 2 :\n";
    // Taking input by using 'cin>>' function:
    cin >> num2;

    // Displaying the sum:
    cout << "The sum is : " << num1 + num2;

    return 0;
}