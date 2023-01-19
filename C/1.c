#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int fact(int *);
int main(){
    int n,f;
    printf("%d",0x78);
    scanf("%d",&n);
    fact(&n);
    printf("%d\n",n);
return 0;
}
int fact(int *n)
{
    if(*n==1){
        return 1;
    }
    else{
        return *n*fact(*n-1);
}
}