#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int fir(int ar[], int n, int key){
    if (n==0)
    {
        return -1;
    }
    if (ar[0]==key)
    {
        return n;
    }
    fir(ar+1,n-1,key);
}
int main(){
    int ar[]={1,2,3,6,2,0,1,20};
    cout<<8-fir(ar,8,1);
    return 0;
}