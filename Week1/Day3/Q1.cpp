// Ques - 01: Write a C++ program that takes an integer N as input from the user and calculates 
// the sum of the first N natural numbers using a for loop.


#include <bits/stdc++.h>


using namespace std;



int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;

    return 0;
}
