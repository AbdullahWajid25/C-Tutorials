// Arrays

#include<iostream>
#include<string>

using namespace std;

int main() {

    // Array :
    // An array is a collection of otems of similar type stored in contigous memory locations, or simply, its a collection of multiple items (of the same type)

    // Syntax :
    // int/str/etc   array_name[array_length] = {array_value1, array_value2, etc}

    // Index :
    // Each item in an array has an index number
    // Index starts from 0, such as the first item of an array has 0 index, second item has 1 index, third has 2 index and so on

    int marks[5] = {70, 60, 50, 73, 67};

    // Printing :
    // An item of an array can be printed like this : 
    // array_name[index_number_of_the_item]
    cout << "Maths : " << marks[0] << endl;
    cout << "Comp : " << marks[1] << endl;
    cout << "Pak st. : " << marks[2] << endl;
    cout << "Eng : " << marks[3] << endl;
    cout << "Urdu : " << marks[4] << endl;

    // Changing values of an array :
    // You can simply change the value of an array like this :
    marks[0] = 75;
    cout << "Updated Maths marks : " << marks[0] << endl;

    // Printing an array using a loop :
    cout << "Using for loop to print an array:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "The marks of " << i << " (index) are : " << marks[i] << endl;
    }

    // Arrays and user input :
    int abcd[] = {};
    cout << "Enter number : " << endl;
    cin >> abcd[0];
    cin >> abcd[1];
    cin >> abcd[2];
    cout << abcd[0] << endl;
    cout << abcd[1] << endl;
    cout << abcd[2] << endl;
    
    //! Quiz : Print an array using while and do while
    //! Solution:
    // 1. While loop
    cout << "Using while loop to print an array:" << endl;
    int i = 0;
    while (i < 5)
    {
        cout << "The marks of " << i << " (index) are : " << marks[i] << endl;
        i++;
    }
    
    // 2. Do while loop
    int i2 = 0;
    cout << "Using do while loop to print an array:" << endl;
    do
    {
        cout << "The marks of " << i2 << " (index) are : " << marks[i2] << endl;
        i2++;
    } while (i2 < 5);
    
    // Practice:
    string name[3] = {"Abdullah", "Daniyal", "Rehan"};
    cout << "My friend's name is " << name[0] << endl;
    cout << "My friend's name is " << name[1] << endl;
    cout << "My friend's name is " << name[2] << endl;

    return 0;
}