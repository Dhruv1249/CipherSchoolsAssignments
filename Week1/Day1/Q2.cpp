//Ques-02 Write a C++ program that takes five grades (integers) as input from the user and calculates the average grade. Output the average grade to the user.


#include <bits/stdc++.h>


using namespace std;

int main(){
    int a;
    float sum = 0;
    for(int i = 1;i<6;i++){
        cout<<"Enter grade "<<i<<": ";
        cin>>a;
        sum+=a;
    }
    cout<<"Average grade is: ";
    printf("%.1lf",sum/5.0);
}
