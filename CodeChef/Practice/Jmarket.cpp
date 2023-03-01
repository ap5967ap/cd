#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int a,b,c;
        cin>>a>>b>>c;
        int mn=min(a,min(b,c)); 
        int mx=max(a,max(b,c));
        int md=a+b+c-mn-mx;
        cout<<mn*(x-1)+md<<endl;
    }
    return 0;
}