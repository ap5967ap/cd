#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void toh(int n,char a,char c,char b){
    if (n==0)
    {
        return;
    }
    
    toh(n-1,a,b,c);
    cout << "Move the disk "<< n << " from " << a <<" to "<< c << endl;
    toh(n-1,b,c,a);
}
int main(){
    int n;
    cin>>n;
    char a,b,c;
    a='S';
    b='A';
    c='H';
    toh(n,a,b,c);

    return 0;
}