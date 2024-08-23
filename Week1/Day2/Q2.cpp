// Ques-02: Write a C++ program that takes an integer score (0-100) as input from the user and prints 
// the corresponding grade using if-else-if statements.

#include "bits/stdc++.h"


using namespace std;

int main(){
    int a;

    cout<<"Enter the score: ";
    cin>>a;
    if(a>=90&&a<=100){
        cout<<"Grade: A";
    }
    else if(a>=80&&a<=89){
        cout<<"Grade: B";
    }
    else if(a>=70&&a<=79){
        cout<<"Grade: C";
    }
    else if(a>=60&&a<=69){
        cout<<"Grade: D";
    }
    else if(a>=0&&a<=59){
        cout<<"Grade: F";
    }
    else{
        cout<<"Please enter score in range 0-100";
    }


}
