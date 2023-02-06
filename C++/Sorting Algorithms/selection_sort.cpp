#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void selection_sort(int *ar, int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (ar[i]>ar[j])
            {
                int t=ar[j];
                ar[j] = ar[i];
                ar[i] = t;
            }
            
        }
        
    }
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    selection_sort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}