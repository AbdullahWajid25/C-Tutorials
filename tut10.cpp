// For, while and do while loops

#include <iostream>

using namespace std;

int main()
{
    //? ========== Loops in C++ ==========
    // Loops are used to perform something repeatedly uuntil a certain condition is full filled

    //* There are three types of loops:

    //! ========== For loops ==========
    // First initialization takes place, then condition is checked, then the loop body or code gets executed, after this updation taked place. Then again condition is checked, loop body or code gets executed, then updation and sooooo on!

    //* Syntax:
    /*      for (initialization; condition, updation) {
                    loop body/code;
                }
    } */

    //* For loop to print counting till the number 10:
    cout << "--- For Loop ---" << endl;
    for (int i = 0; i < 11; i++)
    {
        cout << i << endl;
    }

    //* Infinite For loop:
    // for (int i = 0; 9 < 10; i++) {
    //     cout << i << endl;
    // }

    //! ========== While loops ==========
    // While loops keep executing until a simple condition is "true"
    // They will stop executing as soon as the condition becomes false

    //* Syntax:
    /*      while (condition = true) {
                loop code/body;
            }
    */

    //* While loop to print counting till the number 10:
    cout << "--- While Loop ---" << endl;
    int i = 0;
    while (i < 11)
    {
        cout << i << endl;
        i++
    }
    
    //* Infinite While loop:
    // while (true) {
    //      cout << "im an infinite while loop!" << endl;
    // }

    //! ========== Do-While loops ==========
    // Its the same as while loop but the only difference is that the condition is checked after the loop is executed. Even if the condition is false, the loop will be executed once, why, because the consition is checked later

    //* Syntax:
    /*      do {
                loop code/body;
            } while (condition = true);
    */

    //* While loop to print counting till the number 10:
    cout << "--- Do - While Loop ---" << endl;
    int i = 0;
    do {
        cout << i << endl;
        i++
    } while (i < 11);
    
    //* Infinite While loop:
    // do {
    //      cout << "im an infinite while loop!" << endl;
    // } while (true);

    //! Quiz :
    //      Make a loop(any loop) to print the table of 6
    //! Solution :
    for (int i = 6; i <= 10; i = i + 6)
    {
        int num = 1;
        cout << "6 x " << num << " = " << i;
        num = num + 1;
    }
    
    return 0;
}