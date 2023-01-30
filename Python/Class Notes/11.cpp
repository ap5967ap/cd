#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        // int n;
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int none=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1)
            none++;
    }
    cout<<n-none/2<<endl;
    }
    return 0;
}