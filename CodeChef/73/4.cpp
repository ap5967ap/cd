#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int orc(int ar[],int n){
    int x=0;
    for (int i = 0; i < n; i++)
    {
        x=x|ar[i];
    }
    return x;
}
int main(){
    int t;
    cin>>t;
    while(t--){

    int n,a;
    cin>>n;
    int ar[n];
    int key;
    cin>>key;
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    int x=orc(ar,n);
    for (int i = 0; i <key+1; i++)
    {
        if ((x|i)==key){
             a=i;
            break;
        }
        else{
            a=-1;
        }
    }
    cout<<a<<endl;
    }
    return 0;
}