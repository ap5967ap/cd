#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
    
    
    long double n;
    cin>>n;
    long double x = n*(n+1)*(2*n+1)/3-n*(n+1)/2;
    x=x*2022;
    long double t=x;
    x=x/(10e9+7);
    int64_t y=int64_t(x);
   
    int z=(y*(10e9+7));
    
     x=x*(10e9+7)-z;
    cout<<int64_t(t)<<endl;
    
    }
    return 0;
}