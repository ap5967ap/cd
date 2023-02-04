#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int z=0,o=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0')
                z++;
            else
                o++;
        }
    
        if(o<=z)
            cout<<o<<endl;
        else
            cout<<z+1<<endl;
    }
    
    return 0;
}