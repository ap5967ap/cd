#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int minar(int ar[],int64_t n){
    int64_t x=INT64_MAX;
    int64_t idx=0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i]<x)
        {
            x=ar[i];
            idx=i;
        }
        
    }
    return idx;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */

    
    int n,m;
    cin>>n>>m;
    int ar[n];
    int br[m];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>br[i];
    }
    for (int i = 0; i < m; i++)
    {
        int64_t d=minar(ar,n);
        ar[d]=br[i];
        d=minar(ar,n);
    }
    int64_t sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+ar[i];
    }
    cout<<sum<<endl;
    }
    return 0;
}