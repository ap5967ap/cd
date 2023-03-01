#include <stdio.h>
#include <math.h>


int main(){
    int *p=0;

    printf("%p %d",p,*p);//gives segmentation error
    int * pi; // Pointer to int
    char * pc; // Pointer to char
    double * pd; // Pointer to double
    // pi=pc;
    // pc=pd;
    // pd=pi;//warnings
    // *pc=5;
    // *pi=6;
    // *pd=4;
    // printf("%d",*pc);
    // *pi=*pc;
    // *pc=*pd;
    // *pd=*pi;
return 0;

}