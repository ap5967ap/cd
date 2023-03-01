#include <stdio.h>
#include <math.h>

int ar(int x,int n, int num){

    if (n==0)
    {   
        if (num==x)
        {
            return 1;
        }
        return 0;
    }
    int y=n%10;
    ar((x+(y*y*y)),n/10,num);
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",ar(0,n,n));
return 0;
}