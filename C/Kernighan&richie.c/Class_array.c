#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int *address(){
    int y=56;
    int *x=malloc(4);
    printf("address of x is %p\n",x);
    *x=y;
    return x;
}
int main(){
    int *a = address();
    printf("address of a is %p",a);
return 0;
}