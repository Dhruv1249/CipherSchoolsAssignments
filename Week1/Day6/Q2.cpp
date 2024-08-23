// Write a C++ program that takes an array as input and prints the sum of odd numbers and the sum of even numbers separately.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cout << "Enter the size of the array: ";
    cin >> a;

    int arr[a];
    cout << "Enter the array: ";
    for (int i = 0; i < a; ++i) {
        cin >> arr[i];
    }

    int odd = 0, even = 0;
    for (int i : arr) {
        if (i % 2 == 0) {
            even += i;
        } else {
            odd += i;
        }
    }

    cout << "Sum of odd numbers: " << odd << endl;
    cout << "Sum of even numbers: " << even << endl;

    return 0;
}
