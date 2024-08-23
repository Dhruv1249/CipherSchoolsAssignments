// Write a C++ program that takes an array as input and prints the sum of the array.

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

    int sum = 0;
    for (int i = 0; i < a; ++i) {
        sum+= arr[i];
    }

    cout << "Sum of the array: " << sum << endl;

    return 0;
}
