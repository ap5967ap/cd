#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
        while(t--){
            int n;
            cin>>n;
            if(n>100){
                cout<<2000<<endl;
            }
            else if(n>70 && n<=100){
                cout<<500<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    return 0;
}