#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int d1=x1*x1+y1*y1;
        int d2=x2*x2+y2*y2;
        if(d1>d2){
            cout<<"ALEX"<<endl;
        }
        else if(d1<d2){
            cout<<"BOB"<<endl;
        }
        else{
            cout<<"EQUAL"<<endl;
        }
    }
    return 0;
}