//Ques - 01 Write a C++ program that takes two strings as input from the user and concatenates them. Then, output the concatenated string.

#include <bits/stdc++.h>


using namespace std;

int main(){
    string a;
    string b;
    cout<<"Enter the first string: ";
    getline(cin,a); 
    cout<<"Enter the second string: ";
    getline(cin,b);
    cout<<"Concatenated string: "<<a<<b;
}
