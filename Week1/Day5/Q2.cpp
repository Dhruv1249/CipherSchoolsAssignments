// Write a C++ function that takes a string as input and reverses it.

#include <bits/stdc++.h>
using namespace std;

string rev(string str) {
    reverse(str.begin(), str.end());
    return str;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string revStr = rev(str);
    cout << "Reversed string: " << revStr << endl;

    return 0;
}
