// Move all zeroes to end of array

#include<bits/stdc++.h>
using namespace std;

void pushZerosToEnd(int arr[],int n){
    int ptr1=0,ptr2=0;
    while(1){
        if(arr[ptr1] == 0){
            ptr2 = ptr1;
            while(ptr2<n and arr[ptr2]==0){
                ptr2++;
            }
            if(ptr2<n){
                swap(arr[ptr1],arr[ptr2]);
            }else{
                break;
            }
        }
        ptr1++;
        if(ptr1>=n) break;
    }
}

int main() 
{ 
    int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    pushZerosToEnd(arr, n); 
    cout << "Array after pushing all zeros to end of array :\n"; 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    return 0; 
} 