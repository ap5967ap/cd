#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */

    
    int ar[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>ar[i][j];
        }
    }
    int a=ar[0][0];
    int b=ar[0][1];
    int c=ar[1][0];
    int d=ar[1][1];
    bool x= false;
    if ((a<b && b<d && a<c && c<d) || (c<a && a<b && c<d && d<b) || (d<c && c<a && d<b && b<a) || (b<d && d<c && b<a && a<c))
    {
        x=true;
    }
    if(x){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}