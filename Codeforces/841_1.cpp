#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
    int n;
    cin>>n;
    long double ar[n];
    for (long int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    long double p=1;
    for (long int i = 0; i < n; i++)
    {
        p=p*ar[i];
    }
    p=p+n-1;
    cout<<int64_t(p*2022)<<endl;
    }
    return 0;
}