// Write a C++ program that takes two integers as input and performs the following arithmetic operations: 
// Addition, Subtraction, Multiplication, Division (ensure that you handle division by zero), Modulus

#include <bits/stdc++.h>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

   

    if (num2 != 0) {
        double a = num1 ;
        double b = num2;
        

        cout << "Addition: " << num1 + num2 << endl;
        cout << "Subtraction: " << num1 - num2 << endl;
        cout << "Multiplication: " << num1 * num2 << endl;
        cout << "Division: " << a/b<< endl;
        cout << "Modulus: " << num1 % num2 << endl;
    } else {
        cout << "Division and modulus by zero are undefined." << endl;
    }

    return 0;
}
