// Rearrange an array such that arr[i] = i

#include<bits/stdc++.h>
using namespace std;

void fixArray(int A[],int len){
    for(int i=0;i<len;i++){
        if(A[i]!=-1){
            swap(A[i],A[A[i]]);
        }
    }
}

int main()
{
    int A[] = { -1, -1, 6, 1, 9, 
               3, 2, -1, 4, -1 };
 
    int len = sizeof(A) / sizeof(A[0]);
 
    // Function Call
    fixArray(A, len);
 
    // Print the output
    for (int i = 0; i < len; i++)
        cout << A[i] << " ";
}