// Write a program to reverse an array or string

#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverseArray(int arr[],int l,int r){
    while(l<r){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6};
     
    int n = sizeof(arr) / sizeof(arr[0]); 
 
    // To print original array 
    printArray(arr, n);
     
    // Function calling
    reverseArray(arr, 0, n-1);
     
    cout << "Reversed array is" << endl;
     
    // To print the Reversed array
    printArray(arr, n);
     
    return 0;
}