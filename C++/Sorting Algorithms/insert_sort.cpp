#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// Iterate from arr[1] to arr[N] over the array. 
// Compare the current element (key) to its predecessor. 
// If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.
void insert_sort(int *arr, int n){
    for(int i=1; i<n; i++){
        int j=i-1;
        int key=arr[i];
        while (arr[j]>key && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    insert_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}