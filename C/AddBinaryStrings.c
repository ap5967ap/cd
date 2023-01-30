#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int BinaryToDecimal(int n)
{
    if(n==0)
        return 0;
    else
        return (n% 10 + 2* BinaryToDecimal(n / 10));
}

int main(){
    char x[100];
    char y[100];
    scanf("%s %s", x, y);
    int a=BinaryToDecimal(atoi(x));
    int b=BinaryToDecimal(atoi(y));
    int c=a+b;
    char p[]="";
    if(c==0)
        p[0]='0';
    else{
    while(c>0){
        if(c&1)
            strcat(p, "1");
        else{
            strcat(p, "0");
        }
        c>>=1;
    }
    }
    printf("%s",strrev(p));
    
return 0;
}
