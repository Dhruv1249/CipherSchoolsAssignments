// Write a C++ function that takes a string as a parameter and checks how many vowels and 
//consonants are in that string.

#include <bits/stdc++.h>
using namespace std;

void count(string str, int &vow, int &cons) {
    vow = cons = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vow++;
        } 
        else {
            cons++;
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int vow, cons;
    count(str, vowels, consonants);

    cout << "Number of vowels: " << vow << endl;
    cout << "Number of consonants: " << cons << endl;

    return 0;
}
