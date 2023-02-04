#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int ar[3];
        for (int i=0; i<3; i++)
            cin >> ar[i];
        int64_t x =INT64_MAX;
        int idx=0;
        for (int i = 0; i < 3; i++)
        {
            if(ar[i]<x){
                x=ar[i];
                idx=i;
            }
        }
        if(idx==0){
            cout<<"ALICE"<<endl;
        }
        if(idx==1){
            cout<<"BOB"<<endl;
        }
        if(idx==2){
            cout<<"CHARLIE"<<endl;
        }
    }
    
    return 0;
}