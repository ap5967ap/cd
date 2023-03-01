#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int ar[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ar[i][j] =(i+1)*(j+1);
        }
        
    }
    int count = 0;
    // cout<<ar[4][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ar[i][j]==x){
                count++;
            }
        }
        
    }
    cout<<count<<endl;

    
    return 0;
}