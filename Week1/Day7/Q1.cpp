//Ques-01 Write C++ program that take array from the user and sort the 
//array using bubble sort algorithm.

#include<bits/stdc++.h>

using namespace std;
void print(int arr[],int n){
    for(int i = 0;i < n;i++){                              
        cout<< arr[i]<< " ";
    }

}
void bubbleSort(int arr[], int n){
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
    print(arr,n);
}
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[n];
    }
    bubbleSort(arr,n);
   
    return 0;
}
