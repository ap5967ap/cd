#include <stdio.h>
#include <math.h>

int digits(int n){
    return (int)(log10(n))+1;
}
int main(){
    int n;
    scanf("%d",&n);
    int x=1;
    for (int i = 1; i < digits(n); i++)
    {
        x=x*10+1;
    }
    printf("%d",x-n);
return 0;
}