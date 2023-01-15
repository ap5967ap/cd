#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
    
    int n;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    int ct[100];
    for (int i = 0; i < 100; i++)
    {
        ct[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
        ct[ar[i]]++;
    }
    bool ok = true;
    for (int i = 0; i < 100; i++)
    {
        if (ct[i]%2!=0)
        {
            ok=false;
            break;
        }
        
    }
    if (ok)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }}
    
    return 0;
}