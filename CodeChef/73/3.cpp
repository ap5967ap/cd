#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool x=false;
        while (n>0)
        {
            if (n%10==7){
                x=true;
                break;
            }
            n=n/10;
        }
        if (x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}