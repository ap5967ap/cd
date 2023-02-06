#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

// to use int *x,y as both pointers we use typedef
typedef int* pointer;
int main(){
    int a=5,b=6;
    // int *x,y; //only x is pointer while y is an integer
    int *x=&a, *y=&b; //OK
    pointer c,d;
    c=&a, d=&b;
    printf("%p %p ",x,y);
    printf("%d %d",*x,*y);
    printf("\n");
    printf("%p %p ",c,d);
    printf("%d %d",*c,*d);
return 0;
}