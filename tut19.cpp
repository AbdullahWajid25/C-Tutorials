// Function overloading

#include<iostream>

using namespace std;

// Creating overloaded functions :

// To create an overloaded function, you have to use the "same function name" but the "number or type of arguments and the code within the function should be different" (obviously it will be different because function overloading is used to perform different actions with the same function)

// Below is created an overloaded function:

// 1. Find volume of cube
int volume(int a) {
    return (a * a * a);
}

// 2. Find volume of rectangular box
int volume(int l, int b, int h) {
    return (l * b * h);
}

// 1. Find volume of cylinder
int volume(float r, int h) {
    return (3.14 * r * r * h);
}

int main() {

    // Overloading :
    // It means to use something for more than one purpose
    // It brings "Polymorphism" into action

    cout << "Volume of cube of side 3 : " << volume(3) << endl;
    cout << "Volume of rectangular box of length 2, breadth 4 and height 5 : " << volume(2, 4, 5) << endl;
    cout << "Volume of cylinder of radius 3 and height 7 : " << volume(3, 7) << endl;

    return 0;
}