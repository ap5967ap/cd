#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int countDistinct(int arr[], int n)
{
    
    sort(arr, arr + n);
 
    // Traverse the sorted array
    int res = 0;
    for (int i = 0; i < n; i++) {
 
        // Move the index ahead while
        // there are duplicates
        while (i < n - 1 && arr[i] == arr[i + 1])
            i++;
 
        res++;
    }
 
    return res;
}
int main(){
    int n;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    cout<<countDistinct(ar,n/sizeof(ar[0]));
    return 0;
}