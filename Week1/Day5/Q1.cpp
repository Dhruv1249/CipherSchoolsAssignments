// Write a C++ function that checks whether an integer is odd or even. If the integer is odd, 
// print "Odd"; otherwise, print "Even."

#include <bits/stdc++.h>
using namespace std;

void OddEven(int n) {
    if (n % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    OddEven(n);

    return 0;
}
