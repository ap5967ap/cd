#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    int a1=arr[0];
    int a2=arr[1];
    int a3=arr[2];
    int a4=arr[3];
    int x=0, y=0;
    x+=a1; y+=a1;
    int c=a1;
        if (a1>0)
        c+=max(a3,a2);
        
        // a2=a2-min(a2,a3);
        // a3=a3-min(a3,a2);
        // int dd=max(a2,a3);
        // while(x>=0 && y>=0 && dd>0){
        //     dd--;
        //     x++;
        //     y--;
        //     c++;
        // }
    while(x>=0 && y>=0 && a4>0){
        c++;
        x--;
        y--;
        a4--;
    }
    cout<<c<<endl;
    }
        return 0;
}