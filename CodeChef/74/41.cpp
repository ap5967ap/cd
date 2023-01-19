#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i]<0){
                a[i]=-1*a[i];
            }
        }
        int mn=0;
        for (int i = 0; i < n; i++)
        {
            mn=max(mn,a[i]);
        }
        
        for(int i=0;i<n;i++){
            mn=min(mn,a[i]);
        }
        if((mn-1)<0){
            cout<<-1;
        }
        else{
            cout<<mn-1<<endl;
        }
    }
    return 0;
}