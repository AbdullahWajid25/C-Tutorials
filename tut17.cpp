// Inline functions, default arguments and constant arguments

#include<iostream>

using namespace std;

// An inline function :
inline int product(int num1, int num2) {
    // === Not recommended to use static variables with inline functions ===
    // static int c = 0; // This will only execute once becuase it is static
    // c = c + 1; // Next time the function will run, the value of c will be retained, i.e, it will be what it was before
    return num1 * num2;
}

// Function with default parameter :
float moneyreceived(int money, float interestRate = 1.04) {
    return money * interestRate;
}

int main() {

    int a, b, money;

    // Inline funtions :
    // Inline funtions are used where a small function needs to be executed repeatedly.
    // Instead of sending value to functions, processing them and getting the result back and doing this repeatedly, inline function simply replaces the function invoking code with the code present in the function during runtime.
    // By using inline functions, the actual purpose of writing the function is finished.
    // Syntax : Put inline keyword before a function.

    cout << "Enter two numbers :" << endl;
    cin >> a >> b;
    cout << "Product 1 : " << product(a, b) << endl;
    // cout << "Product 2 : " << product(a, b) << endl;
    // cout << "Product 3 : " << product(a, b) << endl;
    // cout << "Product 4 : " << product(a, b) << endl;
    // cout << "Product 5 : " << product(a, b) << endl;

    // Default arguments :
    // It's an argument that has default value if it's value is not given
    // All default arguments(that are passed) and parameters(in the functions, in which the value of argumetns is stored) should be written on the extreme right

    // e.g. using a function with default argument :
    cout << "Enter your amount of money : ";
    cin >> money;
    cout << "Your money before : " << money << endl;
    cout << "Your money after applying interest rate : " << moneyreceived(money) << endl;
    cout << "Your money after applying VIP interest rate : " << moneyreceived(money, 1.1) << endl;

    // Constant arguments :
    // Arguments whose value should not be changed by the function(accidently) 
    // Syntax : int function(const int a, const float b) {...}

    return 0;
}