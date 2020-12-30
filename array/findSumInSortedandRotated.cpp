// Given a sorted and rotated array, find if there is a pair with a given sum
#include<bits/stdc++.h>
using namespace std;

bool pairInSortedRotated(int arr[], int n,int x){
    int i; // pivot
    for(i=0;i<n-1;i++)
        if(arr[i]>arr[i+1])
            break;
    
    int l = (i+1)%n; // l is index of smallest element
    int r = i; // r is index of largest element.

    while(l!=r){
        if(arr[l]+arr[r] == x)
            return true;
        
        if(arr[l]+arr[r]<x)
            l = (l+1)%n;
        else
            r = (n+r-1)%n;
    }
    return false;
}

int main(){
    int arr[] = {11, 15, 6, 8, 9, 10}; 
    int sum = 16; 
    int n = sizeof(arr)/sizeof(arr[0]); 

    if(pairInSortedRotated(arr, n, sum)){
        cout<<1;
    }else{
        cout<<0;
    }

    return 0;
}