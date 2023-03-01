#include <stdio.h>
#include <math.h>

int fact(int n){
    if (n==0)
    {
        return 1;
    }
    return fact(n-1)*n;
}
int ncr(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){  
    int n;
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
       for (int j = 0; j <=i; j++)
       {
        printf("%d ",ncr(i,j));
       }
       printf("\n");
    }
return 0;
}