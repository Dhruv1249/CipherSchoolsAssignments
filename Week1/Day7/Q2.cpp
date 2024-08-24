//Ques-02 Write C++ program that take array from the user and sort the array 
//using insertion sort algorithm.


#include<bits/stdc++.h>


using namespace std;
void print(int arr[],int n){
    for(int i = 0;i < n;i++){
        cout<< arr[i]<< " ";
    }
}

void insertionSort(int arr[], int n){
    for(int i = 1;i<n;i++){
        int current = arr[i];
        int prev = i-1;
        while(current <arr[prev]&& prev >= 0){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1] = current;
    }
}

int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);
    print(arr,n);
    return 0;
}
