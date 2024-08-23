// Ques-03: Write a C++ program that takes an integer N as input from the user and prints 
// the multiplication table of N up to 10 using a loop.

#include <bits/stdc++.h>


using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Multiplication table of " << n << ":" << endl;

    for(int i = 1; i <= 10; ++i) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}
