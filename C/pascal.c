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
    for (int i = n - 1; i >= 0; i--)
    {
       for (int j = 0; j <=i+1; j++)
       {
        printf("%d",j);
       }
       printf("\n");
    }
return 0;
}