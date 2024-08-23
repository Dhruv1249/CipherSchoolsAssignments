// Ques-02: Write a C++ program that takes an integer N as input from the user and calculates 
// the factorial of N using a loop.


#include <bits/stdc++.h>


using namespace std;


int main() {
    int n;
    int fact = 1;

    cout << "Enter a number: ";
    cin >> n;

   
    for(int i = 1; i <= n; ++i) {
        fact *= i;
    }

    cout << "The factorial of " << n << " is: " << fact << endl;

    return 0;
}
