#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        int mx=0;
        for (int i = 0; i < n; i++)
        {
            mx=max(a[i],mx);
        }
        int idx=0;
        int bmax=0;
        for (int i = 0; i < n; i++)
        {
            if(mx==a[i]){
                if(b[i]>bmax){
                    bmax=b[i];
                    idx=i;
                }
            }
        }
        cout<<idx+1<<"\n";
    }
    return 0;
}