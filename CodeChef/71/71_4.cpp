#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    int count[10000];
    for (int i = 0; i < 10000; i++)
    {
        count[i]=0;
        
    }
    for (int i = 0; i < 10000; i++)
    {
        count[ar[i]]++;
    }
    bool ok=true;
    for (int i = 0; i < 10000; i++)
    {
        if (count[i]%2!=0)
        {
            ok=false;
            
        }
        
    }
    cout<<ok;
    if (ok==false)
    {
        cout<<"NO"<<ok<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}