#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}

void reverse(int arr[],int l, int r){
    while(l<r){
        int temp = arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
        r--;
    }
}

/* 
// GCD method
void printRotated(int arr[],int n,int d){
    // if d>n
    d = d%n;
    int gcdofdandn = gcd(d,n);
    for(int i=0;i<gcdofdandn;i++){
        int temp = arr[i];
        int j=i;
        while(1){
            int k=j+d;
            if(k>=n){
                k = k-n;
            }
            if(k==i){
                break;
            }

            arr[j] = arr[k];
            j=k;
        }
        arr[j] = temp;
    }
}
*/


// Array reversal method
void printRotated(int arr[], int n,int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}


int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d=5;

    printRotated(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}