// Find the Rotation Count in Rotated Sorted array
#include<bits/stdc++.h>
using namespace std;

int countRotations(int arr[], int n){
    int i;
    for(i=1;i<n;i++){
        if(arr[i]<arr[i-1])
            break;
    }
    if(i==n) return 0;
    else return i;
}

int main(){
    int arr[] = {15, 18, 2, 3, 6, 12}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << countRotations(arr, n); 
    return 0; 
}