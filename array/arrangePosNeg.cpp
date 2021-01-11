// Rearrange positive and negative numbers in O(n) time and O(1) extra space

#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rearrange(int arr[],int n){
    int pivot=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(arr[i],arr[pivot]);
            pivot++;
        }
    }

    // printArray(arr,n);

    int l=0;
    int r=pivot;
    while(l<pivot){
        swap(arr[l],arr[r]);
        l+=2;
        r+=2;
    }
}

int main()  
{ 
    int arr[] = {-1, 2, -3, 4,  
                  5, 6, -7, 8, 9}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    rearrange(arr, n); 
    printArray(arr, n); 
    return 0; 
} 