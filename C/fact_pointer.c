#include <stdio.h>
#include <math.h>
int *fact(int n, int *fac){
    if (n==0)
    {
        // *fac=*fac*1;
        return fac;
    }
    else{
        *fac=n**fact(n-1,fac);
        return fac;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int fac=1;
    printf("%d",*fact(n,&fac));
return 0;
}