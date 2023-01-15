#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        int n;
        cin>>n;
        bool x=false;
        while (n>0)
        {
            if ((n%10==0) || (n%10==5)){
                x=true;
                break;
            }
            n=n/10;
        }

        if (x)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
        
    return 0;
}