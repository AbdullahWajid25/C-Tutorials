// Break and continue statements

#include<iostream>

using namespace std;

int main() {
    // Break :
    //      To break out of a loop or iteration, we use the Break keyword
    // e.g.
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;

        // As soon the value of i becomes 3, the break keyword will make the program break out of the for loop and start executing the code outside the for loop
        if (i == 3)
        {
            break;
        }
        
    }

    // Continue :
    //      What continue does is that it stops the current iteration and tells the program to skip and go on the next iteration. It ends the current iteration, not the whole loop
    // e.g.
    for (int i = 0; i < 5; i++)
    {
        // As soon the value of i becomes 3, the continue keyword will make the program break out of the current iteration and start executing the next iteration
        // In this case, the value of i which will be 3, will not be printed
        if (i == 3)
        {
            continue;
        }
        
        cout << i << endl;
    }

    return 0;
}