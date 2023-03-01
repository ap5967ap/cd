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