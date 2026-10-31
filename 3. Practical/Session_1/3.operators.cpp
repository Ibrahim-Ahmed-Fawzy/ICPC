#include <iostream>
using namespace std;

int main(){
    // Decleration Variables
    int x, y;
    int add, subtraction, multiplying, divinision, mod;

    // Initialization Variables
    x = 15;
    y = 2;

    // Print X & Y Value
    cout << "\nX = " << x << "  -   Y = " << y << "\n\n";

    // operators
    add = x + y;            //* Adding Subtraction of numbers
    subtraction = x - y;    //* Subtraction of numbers
    multiplying = x * y;    //* Multiplying of numbers
    divinision = x / y;     //* Divinision of numbers
    mod = x % 2;            //* Modular Division

    // Print The Results
    cout << "1- X Plus Y = " << add << endl;
    cout << "2- X Minus Y = " << subtraction << endl;
    cout << "3- Multiplying By Y = " << multiplying << endl;
    cout << "4- Divided By Y = " << divinision << endl;
    cout << "5- Modular X = " << mod << endl;


    // Increment & Decrement Operators
    x *= 2;                 //* Multiplying By 2
    y += 3;                 //* Adding 3

    cout << "\n    New Value\n" << "X = " << x << "  -   Y = " << y << "\n";

    //output
    cout << "\nX = " << x++ << "  --->  X=" << x << endl;
    cout << "y = " << y << "   --->  y=" << ++y << endl;


}