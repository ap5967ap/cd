#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int max(int a, int b, int c){
    if(a<=b && a>=c){
        return a;
    }
    if(b>=a && b>=c){
        return b;
    }
    else{
        return c;
    }
}
int min(int a, int b, int c){
    if(a<=b && a<=c){
        return a;
    }
    if(b<=a && b<=c){
        return b;
    }
    else{
        return c;
    }
}
// int mid()
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (a==(b+c) || b ==( a+c) || c==(a+b))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO";
        }
    }
    
    return 0;
}