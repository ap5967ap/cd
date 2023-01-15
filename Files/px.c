#include <stdio.h>
#include <math.h>


int main(){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    char x;
    scanf("%c",&x);
    printf("%c",x);

    if(x=='+'){
        printf("%d", a+b);
    }
    else if (x=='-'){
        printf("%d", a-b);
    }
    
    else if (x=='*')
    {
        printf("%d", a*b);
    }
    else  if(x=='/')
    {
        if(b!=0) {printf("%d", a/b);}
        else{printf("error");}

    }
    else{
        printf("invalid operand type");
    }
return 0;
}