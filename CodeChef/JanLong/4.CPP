#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // int t;
    // cin >> t;
    // while(t--){
    int n;
    cin >> n;
    int ar[n], br[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>> br[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i] >br[i]){
            int t=ar[i];
            ar[i] = br[i];
            br[i]=t;
        }
    }
    int mx=0;
    int mn=0;
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    
    for (int i = 0; i < n; i++)
    {
        mx=max(ar[i],mx);

    }
    for (int i = 0; i < n; i++)
    {
        mn=min(ar[i],mn);
    }
    cout<<mx-mn<<endl;
    
    return 0;
}