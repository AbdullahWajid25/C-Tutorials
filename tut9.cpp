// If/Else and control structures

#include<iostream>

using namespace std;

int main() {

    // ========== Control structures ==========
    // Used to control the flow of our program

    // TYPES:

    // 1. Sequence structure:
    //          start -> action 1 -> action 2 -> action n -> end

    // 2. Selection structure:
    //          start -> take input -> condition: T/F -> action 1 (if T) -> end
    //                                                -> action 2 (if F)    

    // 3. Loop structure:
    //          start -> take input -> put loop (e.g. print 'hello' till i < 10) -> action 2 (if i > 10) -> end

    // ========== Selection control structure: if else-if else Ladder ==========
    int age;

    cout << "Hey there! Please enter your age :" << endl;
    cin >> age;

    if ((age < 18) && (age > 0)) {
        cout << "You can not come to the party" << endl;
    }

    else if (age < 0) {
        cout << "You are not yet borned" << endl;
    }

    else if (age == 18) {
        cout << "You will get a kid pass and then you can come to the party" << endl;
    }

    else {
        cout << "You can come to the party" << endl;
    }

    // ========== Switch Case statements (selection structure) ==========
    // --> Switch case statements are used at places where you need to execute a specific code or block of code if the user gives a specific value. 
    // --> e.g. consider you want to print Hello User if user enters the value 2, if user enters 2, you will print Hello User and if user enter 3, you might want to run another block of code and if not, the default statement will get executed

    // Here switch(age) means that you are controlling the value of age so that you can execute a specific block of code on entering a specific value(by the user)
    switch (age)
    {
    case 10:
        cout << "You are number 10 and your super power is invisibilty!" << endl;
        break;

    case 20:
        cout << "You are number 20 and your super power is flying!" << endl;
        break;

    case 30:
        cout << "You are number 30 and your super power is mind reading!" << endl;
        break;
    
    default:
        cout << "You are not special and so you do not get any special power, shu shu..." << endl; 
        break;
    }

    return 0;
}