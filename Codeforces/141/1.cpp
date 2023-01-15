#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
    
    int n;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
  
    int br[n];
    for (int i = 0; i < n; i++)
    {
        br[i]=0;
    }
    int x=((n%2==0)?n/2:(n/2));
    
    int j=((n%2==0)?(n-2):(n-1));
    for (int i = x; i < n; i++)
    {
        br[j] =ar[i];
        j=j-2;
    }
    for (int i = 0,j=1; i < x; i++)
    {
        br[j]=ar[i];
        j=j+2;
    }
    
    if (br[0]==br[1])
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<br[i]<<" ";
    }
    cout<<endl;
    }
    }
    
    return 0;
}