//Ques-03: Write a C++ program that takes an integer as input from the user and prints 
// the corresponding month of the year using a switch case statement. Assume 1 = January, 
// 2 = February, ..., 12 = December.If integer is not from 1 to 12 then print invalid.

#include "bits/stdc++.h"


using namespace std;


int main() {
    int month;
    cout << "Enter a number: ";
    cin >> month;
    cout<<"The month is: ";
    switch(month) {
        case 1: 
            cout << "January" << endl; 
            break;
        case 2:
            cout << "February" << endl; 
            break;
        case 3: 
            cout << "March" << endl; 
            break;
        case 4: 
            cout << "April" << endl; 
            break;
        case 5: 
            cout << "May" << endl; 
            break;
        case 6: 
            cout << "June" << endl; 
            break;
        case 7: 
            cout << "July" << endl; 
            break;
        case 8: 
            cout << "August" << endl; 
            break;
        case 9: 
            cout << "September" << endl; 
            break;
        case 10: 
            cout << "October" << endl; 
            break;
        case 11: 
            cout << "November" << endl; 
            break;
        case 12: 
            cout << "December" << endl; 
            break;
        default: cout << "Invalid input! Please enter a number between 1 and 12." << endl;
    }

    return 0;
}
