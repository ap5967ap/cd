#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(long int a, long int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}
int main(){
    int t;
    cin>>t;
    while(t--){
    long int x, y;
    cin>>x>>y;

    long int a=gcd(x, y);
    long int xx=x/a;
    long int yy=y/a;
    if (xx==1 || yy==1)
    {
        xx*=2;
        yy*=2;
    }
    
    // xx=xx-1;
    // yy=yy-1;
    // // cout<<xx<<yy<<endl
    // long int k=yy*x;
    // long int l=xx*y;
    // k=k-y;
    // l=l-x;
    // if(k >0){
    //     cout<<k<<endl;
    // }
    // else{
    //     cout<<l<<endl;
    // }
    if (x==y) 
    {
        cout<<x<<endl;
    }
    
    else{
        cout<<(yy-1)*x-y<<endl;
    } 
    }
    return 0;
}