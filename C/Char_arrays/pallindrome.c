#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int pal(char x[],int n){
    if(n<=0){
        return 1;
    }
    else{
        return pal(x+1,n-2) && x[0]==x[n-1];
    }
}
int main(){
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    printf("%d",pal(str,n));
return 0;
}