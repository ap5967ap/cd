#include <stdio.h>
#include <math.h>


int main(){
    int a;
    int *p;
    p=&a;
    printf("p=%p",p);
    printf("\na=%d",a);
    printf("\n*p=%d",*p);
    return 0;
}