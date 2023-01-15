#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int ar[9]={1,2,4,7,11,16,22,29,37};
    int df[9]={1,2,3,4,5,6,7,8,9};
    int d=INT16_MAX;
    int idx;

    int i;
    for ( i = 0; i < 9; i++)
    {
        int x=k-ar[i];
        if (x>0)
        {
            d=min(d,x);
            idx=i;
        }
        
    }
    int s=ar[idx];
    int rem=k-s;
    while (rem>df[idx])
    {
        idx--;
        rem=k-ar[idx];
    }
    
    return 0;
}