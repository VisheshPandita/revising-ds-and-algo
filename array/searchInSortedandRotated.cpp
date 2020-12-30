#include<bits/stdc++.h>
using namespace std;

int indexfound(int arr[],int l,int r,int key){
    if(l>r) return -1;

    int mid = (l+r)/2;
    if(arr[mid] == key) return mid;

    // if arr[l to mid] is sorted
    if(arr[l]<=arr[mid]){
        if(key>=arr[l] and key<=arr[mid])
            return indexfound(arr,l,mid-1,key);
        return indexfound(arr,mid+1,r,key);
    }

    if(key>=arr[mid] and key<=arr[r]){
        return indexfound(arr,mid+1,r,key);
    }
    return indexfound(arr,l,mid-1,key);
}

int main(){
    int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 3;

    cout<<indexfound(arr,0,n-1,key);

    return 0;
}